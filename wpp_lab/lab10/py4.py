import numpy as np

arr = np.array(["python", "developer", "code", "machine", "learning"])

centered = np.char.center(arr, 15, '_')
left_justified = np.char.ljust(arr, 15, '_')
right_justified = np.char.rjust(arr, 15, '_')

print("Original Array:")
print(arr)
print("\nCentered:")
print(centered)
print("\nLeft Justified:")
print(left_justified)
print("\nRight Justified:")
print(right_justified)
