import math
T = int(input("Enter number of cases: "))

for i in range(T):
    a = int(input("Enter A(start): "))
    b = int(input("Enter B(end): "))
    temp = a
    count = 0

    while temp <= b:
        if math.sqrt(temp).is_integer():
            count = count+1
        temp = temp+1
    print(count)
