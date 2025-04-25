import math

class Shape:
    def area(self):
        pass  # placeholder for area

    def peri(self):
        pass  # placeholder for perimeter

class Rectangle(Shape):
    def __init__(self, w, h):
        self.w = w
        self.h = h

    def area(self):
        return self.w * self.h  # area of rect

    def peri(self):
        return 2 * (self.w + self.h)  # peri of rect

class Circle(Shape):
    def __init__(self, r):
        self.r = r

    def area(self):
        return math.pi * self.r * self.r  # area of circ

    def peri(self):
        return 2 * math.pi * self.r  # peri of circ

r = Rectangle(4, 5)
c = Circle(3)
print("Rect Area:", r.area())
print("Rect Peri:", r.peri())
print("Circ Area:", c.area())
print("Circ Peri:", c.peri())
