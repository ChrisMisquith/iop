import numpy as np
import matplotlib.pyplot as plt
import random

def f(x):
    return x**3 - 6*x**2 + 11*x - 6

def find_valid_interval(f, lower=-10, upper=10, max_tries=1000):
    for _ in range(max_tries):
        a = random.uniform(lower, upper)
        b = random.uniform(lower, upper)
        if a > b:
            a, b = b, a
        if f(a) * f(b) < 0:
            return a, b
    raise ValueError("Failed to find a valid interval where f(a)*f(b) < 0")

def bisection(f, a, b, tol=1e-6, max_iter=100):
    midpoints = []
    for i in range(max_iter):
        c = (a + b) / 2
        midpoints.append(c)
        if abs(f(c)) < tol or abs(b - a) < tol:
            break
        if f(a) * f(c) < 0:
            b = c
        else:
            a = c
    return np.array(midpoints)

def plot_bisection_process(f, midpoints):
    x_vals = np.linspace(min(midpoints)-1, max(midpoints)+1, 400)
    y_vals = f(x_vals)

    plt.figure(figsize=(10, 5))
    plt.plot(x_vals, y_vals, label='f(x)')
    plt.axhline(0, color='gray', linestyle='--')

    for i, m in enumerate(midpoints):
        plt.plot(m, f(m), 'ro')
        plt.text(m, f(m), f'{i}', fontsize=8)

    plt.title("Bisection Method Root Finding")
    plt.xlabel("x")
    plt.ylabel("f(x)")
    plt.grid(True)
    plt.legend()
    plt.show()

a, b = find_valid_interval(f)
midpoints = bisection(f, a, b)
plot_bisection_process(f, midpoints)
