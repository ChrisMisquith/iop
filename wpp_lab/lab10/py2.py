import numpy as np

def generate_odd_magic_square(n):
    magic_square = np.zeros((n, n), dtype=int)
    i, j = 0, n // 2  

    for num in range(1, n * n + 1):
        magic_square[i, j] = num
        new_i, new_j = (i - 1) % n, (j + 1) % n  

        if magic_square[new_i, new_j]:  
            i += 1
        else:
            i, j = new_i, new_j

    return magic_square

def generate_doubly_even_magic_square(n):
    magic_square = np.arange(1, n * n + 1).reshape(n, n)

    for i in range(n):
        for j in range(n):
            if (i % 4 == j % 4) or ((i % 4 + j % 4) == 3):
                magic_square[i, j] = n * n + 1 - magic_square[i, j]

    return magic_square

def generate_singly_even_magic_square(n):
    half_n = n // 2
    sub_square_size = half_n * half_n
    mini_square = generate_odd_magic_square(half_n)

    magic_square = np.zeros((n, n), dtype=int)

    for i in range(2):
        for j in range(2):
            magic_square[i * half_n:(i + 1) * half_n, j * half_n:(j + 1) * half_n] = mini_square + sub_square_size * (i * 2 + j)

    k = (n - 2) // 4

    for i in range(half_n):
        for j in range(k):
            magic_square[i, j], magic_square[i + half_n, j] = magic_square[i + half_n, j], magic_square[i, j]
            magic_square[i, -j - 1], magic_square[i + half_n, -j - 1] = magic_square[i + half_n, -j - 1], magic_square[i, -j - 1]

    swap_col = [k]

    for i in range(half_n):
        for j in swap_col:
            magic_square[i, j], magic_square[i + half_n, j] = magic_square[i + half_n, j], magic_square[i, j]

    return magic_square

def generate_magic_square(n):
    if n % 2 == 1:
        return generate_odd_magic_square(n)
    elif n % 4 == 0:
        return generate_doubly_even_magic_square(n)
    else:
        return generate_singly_even_magic_square(n)

for N in [4, 5, 6, 7, 8]:
    print(f"Magic Square for N={N}")
    print(generate_magic_square(N))
    print("\n")
