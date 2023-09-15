import torch
import torch.nn as nn
import torch.optim as optim
import time

# Specify device
device = torch.device('mps')


# Larger neural network
class Net(nn.Module):
    def __init__(self):
        super(Net, self).__init__()
        self.fc1 = nn.Linear(1000, 1000)
        self.fc2 = nn.Linear(1000, 1000)
        self.fc3 = nn.Linear(1000, 10)

    def forward(self, x):
        x = torch.relu(self.fc1(x))
        x = torch.relu(self.fc2(x))
        return self.fc3(x)


# Instantiate network and move to device
net = Net().to(device)

# Create dummy data and move to device
batch_size = 256
inputs = torch.rand(batch_size, 1000).to(device)
labels = torch.randint(0, 10, (batch_size,)).to(device)

# Loss and optimizer
criterion = nn.CrossEntropyLoss()
optimizer = optim.SGD(net.parameters(), lr=0.01)

# Train for more epochs
start_time = time.time()
epochs = 1000

for epoch in range(epochs):
    optimizer.zero_grad()
    outputs = net(inputs)
    loss = criterion(outputs, labels)
    loss.backward()
    optimizer.step()

end_time = time.time()
elapsed_time = end_time - start_time

print(f"Training on: {device}")
print(f"Time taken for {epochs} epochs: {elapsed_time:.2f} seconds")
