

from tensorflow.keras.datasets import reuters
from tensorflow.keras.utils import to_categorical
from tensorflow import keras
from tensorflow.keras import layers
from tensorflow.random import set_seed

from preprocessing import vectorize_sequences, to_one_hot

(train_data, train_labels), (test_data, test_labels) = reuters.load_data(num_words=10000)

set_seed(123)

x_train = vectorize_sequences(train_data)
x_test = vectorize_sequences(test_data)

y_train = to_categorical(train_labels)
y_test = to_categorical(test_labels)


class reutersModel(keras.Model):

    def __init__(self, num_categories):
        super().__init__()
        self.inputs = keras.Input(shape=(10000,))
        self.inner_layer = layers.Dense(64, activation="relu")
        self.classifier = layers.Dense(num_categories, activation="softmax")

    def call(self, inputs):
        features = self.inner_layer(inputs)
        features = self.inner_layer(features)
        features = self.inner_layer(features)
        outputs = self.classifier(features)
        return outputs


model = reutersModel(num_categories=46)


model.compile(optimizer="rmsprop",
              loss="categorical_crossentropy",
              metrics=["accuracy"])

model.fit(x_train,
          y_train,
          epochs=9,
          batch_size=512)

results = model.evaluate(x_test, y_test)

print(results)

