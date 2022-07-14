
from tensorflow.keras.datasets import imdb

import numpy as np

from tensorflow import keras
from tensorflow.keras import layers

from preprocessing import vectorize_sequences

(train_data, train_labels), (test_data, test_labels) = imdb.load_data(num_words=10000)





x_train = vectorize_sequences(train_data)
x_test = vectorize_sequences(test_data)

y_train = np.asarray(train_labels).astype("float32")
y_test = np.asarray(test_labels).astype("float32")


model = keras.Sequential([
    layers.Dense(16, activation="relu"),
    layers.Dense(16, activation="relu"),
    layers.Dense(1, activation="sigmoid")
])
model.compile(optimizer="rmsprop",
              loss="binary_crossentropy",
              metrics=["accuracy"])
model.fit(x_train, y_train, epochs=4, batch_size=512)
results = model.evaluate(x_test, y_test)

print(results)


