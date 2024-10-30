#Raquel Serratos
import random

randNum = random.randint(1,10)
x = randNum
print("Enter a number between 0 and 9")
z = int(input())
count = 1

print("Number of guesses: ", count)

while z != x:
    if z < x:
        print(z, " is lower than the correct answer")
    else:
        print(z, " is higher than the correct answer")

    print("\nEnter a number between 0 and 9")
    z = int(input())
    count += 1
    print("Number of guesses: ", count)

print("You Guessed Correct!")
