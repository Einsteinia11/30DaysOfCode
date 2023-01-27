# Problem Statement
# Alexa Loves to play with 0's and 2's. Among the positive integers that consist of 0's and 2's when written in base 10, he wanted to find the Kth smallest integer. Help him find that.
# Input
# Input is given from Standard Input in the following format:

# K
# Output
# Print the answer as an integer.
# Here, the exact value must be printed as an integer, even if it is big. Unnecessary leading zeros such as 0523 are not allowed.
def DecimalToBinary(num):
    if num >= 3:
        DecimalToBinary(num // 2)
    if(num%2 == 1):
        print(2, end = '')
    elif (num%2 == 0):
        print(num%2, end = '')
k = 24
DecimalToBinary(k)