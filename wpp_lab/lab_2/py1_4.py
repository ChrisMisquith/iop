numbers = range(1, 10001)

# Create empty lists for each equivalence class based on modulo 5
equivalence_classes = {0: [], 1: [], 2: [], 3: [], 4: []}

# Place each number in equivalence class=
for number in numbers:
    remainder = number % 5
    equivalence_classes[remainder].append(number)

# Check if numbers are covered by equivalence class
all_numbers_in_classes = set().union(*equivalence_classes.values())
is_valid_union = all_numbers_in_classes == set(numbers)

# Check if number belong to exactly one equivalence class
is_valid_disjoint = sum(len(equivalence_classes[key]) for key in equivalence_classes) == len(numbers)

# Print the results
print("Equivalence Classes: ", equivalence_classes)
print("Is union valid?", is_valid_union)
print("Is disjoint valid?", is_valid_disjoint)