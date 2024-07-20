
def findFibonacciSum():
    num1 = 1
    num2 = 1
    sum = 0
    i = 1

    while i <= 4000000:
        if i % 2 == 0:
            sum += i
        i = num1 + num2
        num2 = num1
        num1 = i
    
    return sum


#for i in range(0, max):
#    if(i == 0):
#        fibonacciArray.insert(0, 1)
#    if(i > 0):
#        prevSum = fibonacciArray[i] + fibonacciArray[i - 1]
#        fibonacciArray.insert(i, prevSum)
#    print(fibonacciArray)

#for i in fibonacciArray:
#    #Add to sum if divisible by 2
#    if(i % 2 == 0):
#        sum += i

if __name__ == "__main__":
    print(findFibonacciSum())