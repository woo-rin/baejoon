n = int(input())

result = 0 
for num in range(1, n+1):
    for i in str(num):
        if i == '3' or i == '6' or i == '9':
            result += 1
print(result)
