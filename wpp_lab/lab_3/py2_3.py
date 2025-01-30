num_inputs = int(input("How many numbers do you want to enter? "))

while num_inputs > 0:
    divisible_count = 0
    number = input("Enter a number: ")

    for digit in number:
        if digit != '0' and int(number) % int(digit) == 0:
            divisible_count += 1

    print(divisible_count)
    num_inputs -= 1