word = input("Enter you word: ")

result=""

for i,letter in enumerate(word):
    if i%2==1:
        a=letter.upper()
        result+=a
    else:
        b=letter.lower()
        result+=b

print(f"Result: {result}")