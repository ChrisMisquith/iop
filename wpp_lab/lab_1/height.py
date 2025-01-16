num_elements = int(input("Enter the number of elements in the array: "))
arr = []

print("Input the elements for the array:")
for _ in range(num_elements):
    num = int(input("Enter a number: "))
    arr.append(num)

print("Original array:", arr)

swap_count = 0

# Selection sort
for i in range(num_elements):
    min_index = i
    for j in range(i + 1, num_elements):
        if arr[j] < arr[min_index]:
            min_index = j
    if min_index != i:
        arr[i], arr[min_index] = arr[min_index], arr[i]
        swap_count += 1

print("Total number of swaps:", swap_count)
print("Sorted array:", arr)