num = input("enter the number: ")
num = int(num)
rev=0

#loop to reverse the number
while num>0:
    dig=num%10
    rev=rev*10+dig
    num=num//10
print("reversed number is: ",rev)