students=[]           # creating list

for i in range(10):
    name=input(f"enter name of student{i+1}: ")   # getting input

    if len(name)>15:          # checking if names are abovle length of 15
        name=name[:15]
    students.append(name)

print("---reversed names---") # printing reversed names
for i in students:
    print(i[::-1])
