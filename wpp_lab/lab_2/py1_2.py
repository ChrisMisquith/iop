import random

rand=[]
for i in range(100):
    a=random.randint(0,1)
    rand.append(a)

cur_count=0
max_count=0

for i in rand:
    if i == 0:
        cur_count=cur_count+1
        if cur_count > max_count:
            max_count=cur_count
    else:
        cur_count=0

print('Max no. of zeros in a row: ',max_count)