import pandas as pd

s = pd.Series(['X', 'Y', 'T', 'Aaba', 'Baca', 'CABA', None, 'bird', 'horse', 'dog'])

upper_case = s.str.upper()
lower_case = s.str.lower()
string_length = s.str.len()

print("Upper case:\n", upper_case)
print("\nLower case:\n", lower_case)
print("\nString lengths:\n", string_length)
