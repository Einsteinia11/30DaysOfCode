# Problem Statement
# Bob is at the origin of a number line. He wants to reach a goal at coordinate X.
# There is a wall at coordinate Y, which Bob cannot go beyond at first. However, after picking up a hammer at coordinate Z, he can destroy that wall and pass through.
# Determine whether Bob can reach the goal. If he can, find the minimum total distance he needs to travel to do so.
x, y, z = map(int, input().split())
if x>0 and y<= x and y>0 and z<0:
    print(x-2*z)
elif x<0 and y<0 and y>=x and z>0:
    print(2*z-x)
elif x>0 and y<= x and y>0 and z>=y:
    print(-1)
elif x<0 and y<0 and y>=x and z<=y:
    print(-1)
else:
    print(abs(x))