import math

# Store user entered coordinates
coords = []
for i in range(3):
    coords.append(input("Enter X-Y-Z separated by - "))

nearest_neighbors = []  # To store nearest neighbors

for coord in coords:
    X, Y, Z = map(int, coord.split("-"))  # Parse current coord
    shortest = float('inf')  # Initialize shortest distance
    nearest = None  # Nearest neighbor

    for coord1 in coords:
        if coord1 == coord:  # Skip self-comparison
            continue 

        X1, Y1, Z1 = map(int, coord1.split("-"))  # Parse neighbor coord
        short = math.sqrt((X - X1) * 2 + (Y - Y1) * 2 + (Z - Z1) ** 2)  # Distance

        if short < shortest:  # Update nearest
            shortest = short
            nearest = coord1

    nearest_neighbors.append((coord, nearest))  # Save result

print(nearest_neighbors)  # Print nearest neighbors