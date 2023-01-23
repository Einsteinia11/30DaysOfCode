# Problem Statement
# You are given strings S and T consisting of lowercase English letters. Determine whether T is a (contiguous) substring of S.

# A string Y is said to be a (contiguous) substring of X if and only if Y can be obtained by performing the operation below on X zero or more times.

# Do one of the following.
# i) Delete the first character in X.
# ii) Delete the last character in X.
# For instance, the tag is a (contiguous) substring of voltage, while ace is not a (contiguous) substring of atcoder.
s = input()
t = input()
if s in t:
    print("Yes")
else:
    print("No")