def pangram(s):
    s = s.lower()
    letter_set = set()

    for char in s:
        if char.isalpha():
            letter_set.add(char)

    if len(letter_set) == 26:
        print("pangram")
    else:
        print("not pangram")

s = input().strip()
pangram(s)