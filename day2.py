# Newton loves EVEN numbers.

# You are given two integers N and M. Generate 5 unique even numbers for Newton between N and M (excluding both).
n=int(input())
guest=[]
for i in range(1,n):
    a, b=input().split()
    guest.append(a)
    guest.append(b)
' '.join(guest)
if guest.count(a) ==n-1:
    print('Yes')
elif guest.count(b)==n-1:
    print('Yes')
else:
    print('No')