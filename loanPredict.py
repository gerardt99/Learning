import pandas as pd
import numpy as np
import time

TEST = r'D:\Users\torresg\Downloads\ML\LoanPredict\test.csv'
TRAIN = r'D:\Users\torresg\Downloads\ML\LoanPredict\train.csv'

def load(file):
    data = pd.read_csv(file)
    if file == TEST:
        data['source'] = 'Test'
    else:
        data['source'] = 'Train'
    return(data)

def combine(test, train):
    data = pd.concat([test, train])
    return(data)

def main():
    data_test = load(file=TEST)
    data_train = load(file=TRAIN)
    data = combine(data_test, data_train)
    print(data.describe())
    return

if __name__ == '__main__':
    start = time.clock()
    main()
    end = time.clock()
    print("Time to run: ", end - start)
    