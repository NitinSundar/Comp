def func(i):
    i = int(i) + 1
    #print(int(i))
    return int(i)

i = 0

while(i<10):
    i = int(func(i))
    print(i)