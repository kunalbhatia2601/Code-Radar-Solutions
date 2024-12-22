n=int(input())
sm=0
for i in range(0, n):
    x = int(input())

    if(x%2 == 0):
        print(x)
        sm+=x
print(sm+1)