a = [int(input()) for i in range(10)]

for i in range(10):
    a[i] = a[i] % 42

print(len(list(set(a))))