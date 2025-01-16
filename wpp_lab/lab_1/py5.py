num = input("enter value of number for table: ")
num = int(num)
num2 = input("enter mumber of tables wanted: ")
num2 = int(num2)
i=1

#loop for table

while i<=num2:
    multi=i*num
    print(f"{num}*{i}={multi}")
    i+=1