import numpy as np

N = 10  
cartesian_points = np.random.uniform(-10, 10, (N, 2))

r = np.sqrt(cartesian_points[:, 0]**2 + cartesian_points[:, 1]**2)
theta = np.arctan2(cartesian_points[:, 1], cartesian_points[:, 0])

polar_points = np.array([r, theta]).T

print("Cartesian Points:\n", cartesian_points)
print("\nPolar Points (r, theta):\n", polar_points)
