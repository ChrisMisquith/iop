def isfibo(num):
    a,b=0,1

    while num>a:
        a,b=b,a+b
    if num == a:
            print("IsFibo")
    else:
        print("IsNotFibo")
    

T=int(input())

for i in range(T):
    num=int(input(""))
    isfibo(num)