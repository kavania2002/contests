n = int(input())
a = list(map(int, input().split()))

if n == 2:
    print("Yes")
    exit()

for i in range(1, n):
    if a[i] * a[0] != a[i-1] * a[1]:
        print("No")
        exit()

print("Yes")
