import numpy as np

def is_valid(board, row, col):
    """Check if a queen can be placed at (row, col) without being attacked."""
    for i in range(row):
        if board[i] == col or \
           board[i] - i == col - row or \
           board[i] + i == col + row:
            return False
    return True

def solve_n_queens(n=8):
    """Find a valid placement for n queens."""
    board = np.full(n, -1)  # Stores column position for each row
    row = 0
    while row < n:
        placed = False
        np.random.shuffle(possible_positions := list(range(n)))
        for col in possible_positions:
            if is_valid(board, row, col):
                board[row] = col
                placed = True
                break
        if not placed:
            board[:row] = -1  # Reset previous placements
            row -= 1  # Backtrack
        else:
            row += 1
    return board

def print_board(board):
    """Prints the chessboard representation of the solution."""
    n = len(board)
    board_rep = np.full((n, n), '.', dtype=str)
    for r, c in enumerate(board):
        board_rep[r, c] = 'Q'
    print("\n".join(" ".join(row) for row in board_rep))
    print()

# Solve and display a random solution
solution = solve_n_queens()
print_board(solution)
