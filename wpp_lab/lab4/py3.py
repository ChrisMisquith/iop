t = int(input())

for i in range(t):
    n = int(input("Enter cycles:"))
    height = 1

    for j in range(n):
        if j % 2 == 0:
            height *= 2  
        else:
            height += 1  

    print(height)