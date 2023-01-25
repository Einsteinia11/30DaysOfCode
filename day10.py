# Problem Statement
# There are A Bacterias.
# Each time Jerry shouts, the bacterias multiply by K times.
# In order to have B or more slimes, at least how many times does Jerry need to shout?
a,b,k = map(int, input().split())
i = 0
while a<b:
    a*=k
    i+=1
print(i)