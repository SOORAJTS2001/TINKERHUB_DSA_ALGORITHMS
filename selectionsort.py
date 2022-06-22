import time
lis = [12,45,23,51,19,8]
then = time.time()
for i in range(0,6):
    for j in range(i+1,6):
        if lis[i] > lis[j]:
            temp = lis[i]
            lis[i] = lis[j]
            lis[j] = temp
now = time.time()
# print(lis)
print("Time taken by selection sort:",(now - then)*(10**6)," microseconds" )