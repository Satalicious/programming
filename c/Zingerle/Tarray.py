
array = [1,1,1,6,6,6,7,8,8,10,11,12,13,14,15,16,17,18,9,20]
cnt = 0

for i in range(len(array)):
    if array[i] > 9:
        array[i] = 0

print(array)

for i in range(10):
    for j in range(len(array)):
        if (i == array[j]):
            cnt+=1
    if (i < 10):
        print(f'{i}: {cnt}')
        cnt = 0