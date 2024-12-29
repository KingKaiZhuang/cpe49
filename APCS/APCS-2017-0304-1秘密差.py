number = input()
a,b = 0,0

if len(number) % 2 == 0:
    for i in range(len(number)):
        if i % 2 == 0:
            b += int(number[i])
        else:
            a += int(number[i])
else:
    for j in range(len(number)):
        if j % 2 == 0:
            a += int(number[j])
        else:
            b += int(number[j])

print(abs(a-b))