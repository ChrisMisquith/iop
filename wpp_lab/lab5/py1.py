def palindrome(s):
    n = len(s)
    operations = 0
    for i in range(n // 2):
        operations += abs(ord(s[i]) - ord(s[n - i - 1]))
    return operations

# Read input
T = int(input().strip())
results = []
for _ in range(T):
    s = input().strip()
    results.append(str(palindrome(s)))

# Print all results
print("\n".join(results))
