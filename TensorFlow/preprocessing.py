
import numpy as np


def vectorize_sequences(sequences, dimension=10000):
    """
    Encoding text input data.
    """
    results = np.zeros((len(sequences), dimension))
    for i, sequence in enumerate(sequences):
        for j in sequence:
            results[i, j] = 1.
    return results


def to_one_hot(labels, dimension=46):
    """
    Encoding labels for multi-class prediction.
    """
    results = np.zeros((len(labels), dimension))
    for i, label in enumerate(labels):
        results[i, label] = 1.
    return results
