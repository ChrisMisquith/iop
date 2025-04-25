class Employee:
    def __init__(self, name, sal):
        self.name = name  # store name
        self.sal = sal  # store salary

    def __add__(self, other):
        return self.sal + other.sal  # add salaries

    def __sub__(self, other):
        return self.sal - other.sal  # subtract salaries

    def __lt__(self, other):
        return self.sal < other.sal  # compare salaries

    def __gt__(self, other):
        return self.sal > other.sal  # compare salaries

    def __eq__(self, other):
        return self.sal == other.sal  # check equal salaries

e1 = Employee("Alice", 5000)
e2 = Employee("Bob", 7000)
print("Total Sal:", e1 + e2)
print("Sal Diff:", e1 - e2)
print("Alice < Bob:", e1 < e2)
print("Alice > Bob:", e1 > e2)
print("Alice == Bob:", e1 == e2)
