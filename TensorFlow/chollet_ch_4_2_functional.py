

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


inputs = keras.Input(shape=(10000,), name="reuters_input")
features = layers.Dense(64, activation="relu")(inputs)
features = layers.Dense(64, activation="relu")(features)
features = layers.Dense(64, activation="relu")(features)
outputs = layers.Dense(46, activation="softmax")(features)

model = keras.Model(inputs=inputs, outputs=outputs)

model.compile(optimizer="rmsprop",
              loss="categorical_crossentropy",
              metrics=["accuracy"])

model.fit(x_train,
          y_train,
          epochs=9,
          batch_size=512)

results = model.evaluate(x_test, y_test)

print(results)

