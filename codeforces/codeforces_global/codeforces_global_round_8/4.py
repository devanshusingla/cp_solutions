n = int(input())
arr = list(map(int,input().split()))

a = [0]*20
b = []

for i in range(n):
    j=0
    while arr[i] > 0:
        a[j] = a[j] + (arr[i]%2)
        arr[i] = arr[i]//2
        j=j+1


sum=0
for j in range(n):
    b.append(0)
    for i in reversed(range(20)):
        b[j]*=2
        if a[i] > 0:
            a[i] = a[i]-1
            b[j] = b[j]+1

for i in range(n):
    sum = sum + b[i]*b[i]

print(sum)