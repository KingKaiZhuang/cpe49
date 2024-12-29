n = int(input())
friend = [int(x) for x in input().split()]
count = 0
marked = [False] * n

for i in range(n):
    if marked[i]: continue
    count += 1
    marked[i] = True
    current_friend = friend[i]

    while not marked[current_friend]:
        marked[current_friend] =True
        current_friend = friend[current_friend]

print(count)