n = int(input())

card = []
for i in range(n):
    card.append([ int(x) for x in input().split() ])
card.sort(key=lambda x: x[0]** 2 + x[1] ** 2)
print(*card[-2])