import math

# The smallest number n that is evenly divisible by every number in a set {k1, k2, ..., k_m}
# is also known as the lowest common multiple (LCM) of the set of numbers.
# The LCM of two natural numbers x and y is given by LCM(x, y) = x * y / GCD(x, y).
# When LCM is applied to a collection of numbers, it is commutative, associative, and idempotent.
# Hence LCM(k1, k2, ..., k_m) = LCM(...(LCM(LCM(k1, k2), k3)...), k_m).
def compute():
	ans = 1
	for i in range(1, 21):
		ans *= i // math.gcd(i, ans)
	return str(ans)

#import numpy as np
#primes = [1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
#def findSmallestMultiple():
#    n = 2520
#    answerFound = False
#    while answerFound == False:
#        for x in primes:
#            if n % x != 0:
#                n += 2520
#                print("not " + str(n))
#                break
#    
#    return n

if __name__ == "__main__":
    print(findSmallestMultiple())
