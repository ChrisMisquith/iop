import numpy as np
l=[]
for i in range(4):
    x=int(input("enter integer values"))
    l.append(x)

my_a=np.array(l)
my_a.reshape(2, 2)
print(my_a)
