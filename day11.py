# Problem Statement
# Mahi hates the number 7.

# We are interested in integers without the digit 7 in both decimal and octal. How many such integers are there between 1 and N (inclusive)?
n = int(input())
r = 0
for i in range(1, n+1):
    if '7' in str(i) or '7' in oct(i):
        continue
    r+=1
print(r)