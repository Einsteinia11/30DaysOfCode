# Problem Statement
# You are given a sequence of length N consisting of integers:
# A=(A1, A2,...., AN)
# Find the smallest non-negative integer not in (A1, A2,....,AN).
# Input
# The input contains N and elements of sequence separated by a new line.
# N
# A1, A2,. , AN
n = int(input())
a = set(range(3000))
sequence = list(map(int, input().split()))
for i in sequence:
    a.discard(i)
print(min(a))