import time
import time
lis = [12,45,23,51,19,8]
then = time.time()
for i in range(1,6):
    for j in range(0,6-i):
        if (lis[j+1]<lis[j]):
            temp = lis[i]
            lis[i] = lis[j]
            lis[j] = temp
print(lis)
now = time.time()
print("Time taken by bubble sort:",(now - then)*(10**6)," microseconds" )