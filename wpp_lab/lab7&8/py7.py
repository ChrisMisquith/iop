import math

# 2D Vector class
class Vec2D:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def mag(self):  # Magnitude
        return math.sqrt(self.x ** 2 + self.y ** 2)

    def angle(self):  # Rotation w.r.t X-axis
        return math.atan2(self.y, self.x)

    def disp(self):
        print(f"({self.x}, {self.y})")

    @staticmethod
    def dist(v1, v2):  # Distance between vectors
        return math.sqrt((v2.x - v1.x) ** 2 + (v2.y - v1.y) ** 2)

    @staticmethod
    def dot(v1, v2):  # Dot product
        return v1.x * v2.x + v1.y * v2.y

    @staticmethod
    def cross(v1, v2):  # Cross product (returns scalar in 2D)
        return v1.x * v2.y - v1.y * v2.x


# 3D Vector class inheriting from Vec2D
class Vec3D(Vec2D):
    def __init__(self, x, y, z):
        super().__init__(x, y)
        self.z = z

    def mag(self):
        return math.sqrt(self.x ** 2 + self.y ** 2 + self.z ** 2)

    def disp(self):
        print(f"({self.x}, {self.y}, {self.z})")

    @staticmethod
    def dist(v1, v2):  # Distance in 3D
        return math.sqrt((v2.x - v1.x) ** 2 + (v2.y - v1.y) ** 2 + (v2.z - v1.z) ** 2)

    @staticmethod
    def dot(v1, v2):  # Dot product in 3D
        return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z

    @staticmethod
    def cross(v1, v2):  # Cross product in 3D (returns vector)
        return Vec3D(
            v1.y * v2.z - v1.z * v2.y,
            v1.z * v2.x - v1.x * v2.z,
            v1.x * v2.y - v1.y * v2.x
        )


# Example Usage
v1 = Vec2D(3, 4)
v2 = Vec2D(1, 2)
print("2D Distance:", Vec2D.dist(v1, v2))
print("2D Dot:", Vec2D.dot(v1, v2))
print("2D Cross:", Vec2D.cross(v1, v2))

v3 = Vec3D(3, 4, 5)
v4 = Vec3D(1, 2, 3)
print("3D Distance:", Vec3D.dist(v3, v4))
print("3D Dot:", Vec3D.dot(v3, v4))
v_cross = Vec3D.cross(v3, v4)
print("3D Cross:", (v_cross.x, v_cross.y, v_cross.z))
