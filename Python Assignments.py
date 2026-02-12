# 4/1/18
from statistics import median, mode

print ("I have been to multiple countries and try to travel"), \
print ("whenever I get the opportunity") #Display Fact
print ("I love video games, playing guitar, fishing, hiking, reading, playing sports") # Display Hobbies
print ("I'd like to be a video game designer and programmer one day.") #Display Goals

#####################################
# 4/14/18 | 10 Functions

def displayMajor():
    print("Major: Advancing Computer Science")

def askForAge(age):
    getAge = False
    while getAge == False:
        age = input("Please enter your age.")
        age = int(age)
        if age == 0:
            print ("Please enter a valid response.")
            getAge = False
        elif age not in range(1, 110):
            print ("Please enter a valid response.")
            getAge = False
        else:
            getAge = True
    print(age)

def displayGreeting(name):
    name = str(name)
    print("Hello,", name, "!")

def getInverse(number):
    number = int(number)
    number = -number
    print(number)

def printMultiples(count, message):
    count = int(count)
    print(message * count)

def getBiggest(num1, num2):
    num1 = int(num1)
    num2 = int(num2)
    if num1 > num2:
        print("The larger of these two numbers,", num1, "and", num2, ", is", num1)
    elif num1 < num2:
        print("The larger of these two numbers,", num1, "and", num2, ", is", num2)
    else:
        print("The two numbers were the same, both", num1)

def countCapitalChars(string10):
    numCapitals = sum(1 for c in string10 if c.isupper())
    print("There (are/is)", numCapitals, "capital letter(s) in this string.")

def displayMiddleValue(val1, val2, val3):
    val1 = int(val1)
    val2 = int(val2)
    val3 = int(val3)
    medianValue = median([val1, val2, val3])
    modeValue = mode([val1, val2, val3])
    if val1 == val2 or val2 == val3 or val1 == val3:
        print(modeValue)
    else:
        print(medianValue)

def displayCommonStringValues(string1, string2):
    a = set(string1)
    b = set(string2)
    c = a & b
    print (c)

def main():
    displayNameAndMajor()
    askForAge(25)
    displayGreeting("Professor")
    getInverse(5)
    printMultiples(5, "Python!")
    getBiggest(5, 25)
    countCapitalChars("Python Has Been Interesting So Far!")
    displayMiddleValue(5, 8, 5)
    displayCommonStringValues("Python", "Pythagorean")

main()

#######################################################
# 4/4/18 | Lab 2 | Guessing Game

import random
from random import randint
correct = False
while correct == False:
    
    number = random.randint(1,10)

    guess = int(input("I'm thinking of a number between 1 and 10. Try to guess!"))

    if guess == number:
        print("Congratulations!")

    elif guess > number:
        print("Your guess is too high!")

    else:
        print("Your guess is too low!")

#######################################################
# 4/4/18 | Lab 3 | Guessing Game with Loop
playAgain = True
while playAgain == True:
    correct = False
    number = random.randint(1,10)
    while correct == False:
        
        guess = int(input("I'm thinking of a number between 1 and 10. Try to guess!"))

        if guess == number:
            print("Congratulations!")
            correct = True

        elif guess > number:
            print("Your guess is too high! Try again.")

        else:
            print("Your guess is too low! Try again.")

    continueGame = input("Do you want to play again? Hit y or n.")
    if continueGame != "y":
        playAgain = False
print("Goodbye! Thanks for playing!")

################################################
# 4/8/18 | Lab 4 | Print Formatting
gallons = 25
gallonPrice = 2
total = gallons * gallonPrice

print("Welcome to Shell")#Display gas station name
print("1291 Oakland Ave, Sacramento, CA 94207")#Display address
print("April 8, 2018")#Display Date
print("Unleaded Gasoline")#Display Type of Gasoline
print("Gallons: {0:.3f}, Cost Per Gallon: ${1:,.2f}, Total Cost: ${2:,.2f}".format(gallons, gallonPrice, total))#Display Gallons, Cost per Gallon, and Total

################################################
# 4/10/18 | Lab 5 | Guessing Game 3

def guessingGame():
    guessesTaken = 0
    correct = False
    number = randint(1, 10)
    while correct == False:
        guess = int(input("I'm thinking of a number between 1 and 10. Try to guess!"))

        if guess == number:
            guessesTaken +=1
            print("Congratulations! It took you", guessesTaken, "guesse(s).")
            correct = True
        elif guess > number:
            print("Your guess is too high! Try again.")
            guessesTaken +=1
        else:
            print("Your guess is too low! Try again.")
            guessesTaken +=1
                    
playGame = True
while playGame == True:
    guessingGame()
    playAgain = input("Would you like to play again? Press y or n.")
    if playAgain != "y":
        playGame = False

writefile = open("numGuesses.txt", "w")
writefile.write("{}".format(guessesTaken), "total guesses");
writefile.close();

readfile = open("numGuesses.txt", "r")
line = readfile.readline();
print (line);
while line!= "":
    line = readfile.readline();
    print (line);

print("Goodbye! Thanks for playing.")

################################################
# 4/7/18 | Let's Play Dice 1

from random import randint

dice1 = randint(1, 6) #Generate Random Dice Side 1-6 
dice2 = randint(1, 6) #Generate Random Dice Side 1-6

rollAgain = True
rollAgain = input("Welcome to the dice game. Hit y to roll the dice or n to exit.")

while rollAgain == "y":
    print("Die one rolled a", dice1) #Display first die's value
    print("Die two rolled a", dice2) #Display second die's value

    product = dice1 * dice2 #Process multiplication product of dice
    dieQuotient1 = dice1 / dice2 #Process quotient of first die value divided by second die value
    dieQuotient2 = dice2 / dice1 #Process quotient of second die value divided by first die value
    dieSum = dice1 + dice2 #Process sum value of dice
    dieSub1 = dice1 - dice2 #Process value of subtracting second die value from first die value
    dieSub2 = dice2 - dice1 #Process value of subtracting first die value from second die value
    dieAverage = (dice1 + dice2)/2 #Process average of dice values

    print("The product of multiplying the two is", product) #Display product 
    print("Dividing die 1 by die 2 yields", dieQuotient1) #Display dieQuotient1
    print("Dividing die 2 by die 1 yields", dieQuotient2) #Display dieQuotient2
    print("The sum of the dice is", dieSum) #Display dieSum
    print("Subtracting die 2 from die 1 yields", dieSub1) #Display dieSub1
    print("Subtracting die 1 from die 2 yields", dieSub2) #Display dieSub2
    print("The average of the two dice values is", dieAverage) #Display dieAverage

    rollAgain = input("Would you like to roll again? Hit y or n.") #Give user option to play again or close loop
    if rollAgain == "n":
        rollAgain = False
    
print("Goodbye! Thanks for playing!")

#########################################
# 4/8/18 | Let's Play Dice 2

numRolls = 1 #Start number of rolls at 1
houseScore = 0
playerScore = 0
while numRolls < 4: #Run loop for 3 rolls (roll 1, roll 2, roll 3)
    numRolls +=1 #Rolls +1 every time the loop is performed
    dice1 = randint(1, 6) #Random die side generator 1-6
    dice2 = randint(1, 6) #Random die side generator 1-6
    print("Die 1 = ", dice1, "Die 2 = ", dice2) #Display dice values
    dieSum = dice1 + dice2
    if (dieSum == 7) or (dieSum == 11): #Process Craps (7 or 11)
        print("Craps!")
        houseScore +=2
    elif(dice1 == dice2):
        if dice1 % 2 == 0:
            print("Even Doubles!") #Process Even Doubles (4, 8, 12)
            playerScore +=2
        else:
            print("Odd Doubles!") #Process Odd Doubles (2, 6, 10)
            houseScore +=2
    if (dice1 != dice2) and (dieSum < 7): #Process house score +2 (1, 3, 4, 5)
        houseScore +=2
    if (dice1 != dice2) and (dieSum > 7): #Process player score +2 (8, 9, 10)
        playerScore +=2
    
print("player score = ", playerScore) #Display player score
print("house score = ", houseScore) #Display house score
if playerScore > houseScore: 
    print("Congratulations! You won!") #Display Player win
elif playerScore < houseScore:
    print("You lose!") #Display House Win
else:
    print("Tie game!") #Tie (Not applicable with 3 rolls)

#################################################
# 4/24/18 | NASCAR Lab

from random import randint
from operator import attrgetter

class Car:
    def __init__(self, driverName, sponsorName, odometerMiles = 0, speed = 0): #Initialize class, set odometer and speed to 0
        self.odometerMiles = odometerMiles
        self.speed = randint(1, 120)
        self.driverName = driverName
        self.sponsorName = sponsorName

driverList ={"Greg": "Walmart", "Alex": "Geico", "Bob": "WonderBread", "Jimmy": "Taco Bell", "Carter": "Exxon", "James": "Costco",
             "Jimbob": "McDonalds", "Kyle": "Home Depot", "David": "Burger King", "Dan the Man": "Menards", "Pedro": "Napa",
             "Kevin": "Coors", "Mike": "Target", "Lenny": "Shell", "Karl": "Lowe's", "Seth": "Subway", "Colton": "Fastenal",
             "Marcus": "Pepsi", "Willis": "Budweiser", "Dale": "M&M's"} #Dictionary of Drivers and Sponsors

Cars = [Car(driverName, sponsorName) for driverName, sponsorName in driverList.items()]
winner = max(Cars, key=attrgetter("odometerMiles")) #Check for  max odometer miles
while winner.odometerMiles <= 500: #Iterate through cars until one reaches 500 on odometerMiles
    for Car in Cars:
        Car.odometerMiles = Car.odometerMiles + Car.speed
        Car.speed = randint(1, 120)
        print(Car.driverName, "From", Car.sponsorName, "Is Going :", Car.speed, "mph")
    winner = max(Cars, key=attrgetter("odometerMiles"))
print("We have a winner! It's {}, from {}!".format(winner.driverName, winner.sponsorName))

#################################################
# 4/13/18 | Multiplication Tutor Lab

def validIntInput(numProblems):
    numProblems = False
    while numProblems == False:
        if numProblems == 0:
            print("Invalid response. Try again.")
            return False
        elif numProblems not in (0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10):
            print("Invalid response. Try again.")
            return False
        else:
            return True

numProblems = input("How many problems would you like to solve? 1-10.")
numProblems = int(numProblems)

validIntInput(numProblems)

playGame = True
while playGame == True:
    while numProblems > 0:
        correct = False
        while correct == False:
            firstNumber = randint(0, 12)
            secondNumber = randint(0, 12)
            product = firstNumber * secondNumber
            numGuesses = 0

            print("What is ", firstNumber, "*", secondNumber, "?")
            guess = int(input(" "))
        
            if guess == product:
                numGuesses +1
                print("Correct!")
                correct = True
                if numProblems == 0:
                    playGame = False
                else:
                    numProblems -=1
            else:
                if guess > product:
                    print("Hint: Too high.")
                    correct = False
                    numGuesses +1
                elif guess < product:
                    print("Hint: Too low.")
                    correct = False
                    numGuesses +1
                else:
                    numGuesses +1
                    print("Correct!")
                    correct = True
                    if numProblems == 0:
                        playGame = False
                    else:
                        numProblems -=1
print("Goodbye! Thanks for playing.")

#####################################
# 4/15/18 | Word Madness

def countVowels(word):
    numVowels = 0
    for v in word:
        if v in "aeiouAEIOU":
            numVowels +=1
    print("There are", numVowels, "vowels in that word.")

def countConsonants(word):
    numConsonants = 0
    for c in word:
        if c in "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ":
            numConsonants +=1
    print("There are", numConsonants, "consonants in that word.")

def validMode(mode):
    checkMode = False
    while checkMode == False:
        if mode == "v" or "c" or "q":
            break
        else:
            checkMode = False
    return mode

mode = input("Would you like to count vowels, consonants, or quit? Hit v, c, or q.")
validMode(mode)
playGame = True
while playGame == True:
    wordCount = True
    while wordCount == True:
        if mode == "v":
            word = str(input("Please enter a word."))
            countVowels(word)
            newWord = input("Do you have another word? Hit y or n.")
            if newWord == "y":
                wordCount = True
            if newWord != "y":
                wordCount = False
                playGame = False
        elif mode == "c":
            word = str(input("Please enter a word."))
            countConsonants(word)
            newWord = input("Do you have another word? Hit y or n.")
            if newWord == "y":
                wordCount = True
            if newWord != "y":
                wordCount = False
                playGame = False
        elif mode == "q":
            wordCount = False
            playGame = False

print("Goodbye!")

###################################
# 4/19/18 | Listomania

def simplifyMultiples():
    list1 = input("Please enter a list of integers.")
    list1 = [int(x) for x in list1.split()]
    simplifiedList = [x for i, x in enumerate(list1) if i == list1.index(x)]
    print("A simplified version of this list with no duplicates is: ", simplifiedList)
    return simplifiedList

def sortedListCheck():
    list2 = input("Please enter a list of integers.")
    list2 = [int(x) for x in list2.split()]
    listOrdered = sorted(list2)
    if listOrdered == list2:
        return listOrdered
        print("Ordered!")
    else:
        return list2
        print("Not ordered!")

def sumNumberList():
    list3 = input("Please enter a list of integers.")
    list3 = [int(x) for x in list3.split()]
    total = sum(int(i) for i in list3)
    print("The sum of the numbers is: ", total)
    return list3

def reverseListElements():
    list4 = input("Please enter a list of integers, words, or decimal values.")
    list4 = [str(x) for x in list4.split()]
    list4.reverse()
    print("Your reversed list is: ", list4)
    return list4

def combineSortedLists():
    list5 = input("Please enter a list of integers.")
    list5 = [int(x) for x in list5.split()]
    list5.sort()
    list6 = input("Please enter another list of integers.")
    list6 = [int(x) for x in list6.split()]
    list6.sort()
    combinedList = list5 + list6
    combinedList.sort()
    print("The combination of these two lists is: ", combinedList)
    return combinedList

simplifyMultiples()
sortedListCheck()
sumNumberList()
reverseListElements()
combineSortedLists()

###################################
# 4/29/18 | Zoo Lab

class Animal(object):
    def __init__(self, species, diet, color):
        self.species = species
        self.diet = diet
        self.color = color

    def makeNoise(self, noise):
        self.noise = noise
        return self.noise

    def __str__(self):
        info = "This is a {0}. It is mainly a(n) {1}. Its typical color pattern is {2}.".format(self.species, self.diet, self.color)
        return info

class Bird (Animal):
    def __init__(self, species, diet, color, migrationHabits):
        Animal.__init__(self, species, diet, color)
        self.migrationHabits = migrationHabits
    def makeNoise(self, noise):
        self.noise = noise
        return self.noise
    def __str__(self):
        info = "This is a {0}. It is mainly a(n) {1}. Its typical color pattern is {2}. It {3}.".format(
            self.species, self.diet, self.color, self.migrationHabits)
        return info

class Snake (Animal):
    def __init__(self, species, diet, color, venomous):
        Animal.__init__(self, species, diet, color)
        self.venomous = venomous
    def makeNoise(self, noise):
        self.noise = noise
        return self.noise
    def __str__(self):
        info = "This is a {0}. It is mainly a(n) {1}. Its typical color pattern is {2}. It is {3}.".format(
            self.species, self.diet, self.color, self.venomous)
        return info
        
class Dog (Animal):
    def __init__(self, species, diet, color, furPattern):
        Animal.__init__(self, species, diet, color)
        self.furPattern = furPattern
    def makeNoise(self, noise):
        self.noise = noise
        return self.noise
    def __str__(self):
        info = "This is a {0}. It is mainly a(n) {1}. Its typical color pattern is {2}. Its coat is {3}.".format(
            self.species, self.diet, self.color, self.furPattern)
        return info
        
Flamingo = Bird("Flamingo", "Omnivore", "Pink", "Does not typically migrate")
Pigeon = Bird("Pigeon", "Omnivore", "Gray", "Does not typically migrate")

kingCobra = Snake("King Cobra", "Carnivore", "Black & Yellow", "Venomous")
Rattlesnake = Snake("Rattlesnake", "Carnivore", "Brown & Black", "Venomous")

Dalmation = Dog("Dalmation", "Carnivore", "Black & White", "Spotted")
goldenRetriever = Dog("Golden Retriever", "Carnivore", "Golden", "Not Spotted")

print(Flamingo)
print(Flamingo.makeNoise("Caww!"))
print(Pigeon)
print(Pigeon.makeNoise("Cuckoo!"))
print(kingCobra)
print(kingCobra.makeNoise("Hissss!"))
print(Rattlesnake)
print(Rattlesnake.makeNoise("Hisssss!"))
print(Dalmation)
print(Dalmation.makeNoise("Woof!"))
print(goldenRetriever)
print(goldenRetriever.makeNoise("Woof!"))