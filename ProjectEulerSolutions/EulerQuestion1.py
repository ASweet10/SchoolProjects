def findSumOfMultiples():
    sum = 0
    for i in range(1000):
        if(i % 5 == 0) or (i % 3 == 0):
            sum += i
    return sum

if __name__ == "__main__":
    print(findSumOfMultiples())