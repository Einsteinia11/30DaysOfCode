# Problem Statement
# Emily was playing with triplets. She was excited to find out how many triples of non-negative integers (a, b, c) satisfy a+b+c≤S and a×b×c≤T, where S & T are non-negative integers.
a, b=map(int,input().split())
c=0
for d in range(a+1):
    for e in range(a+1):
        for f in range(a+1):
            if((d+e+f<=a) and (d*e*f<=b)):
                c+=1
print(c)