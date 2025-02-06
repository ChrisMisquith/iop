def digisum(num):
    length = len(num)  
    num = int(num)  
    sum_digits = 0  

    for i in range(length):
        digit = num % 10  
        sum_digits += digit  
        num //= 10  

    return str(sum_digits)  

num = input("Enter number: ")

while len(num) != 1:  
    num = digisum(num)  
print(num)