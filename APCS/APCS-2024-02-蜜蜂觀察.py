m,n,k = list(map(int,input().split()))

p = []
for i in range(m):
    p.append(input())

move = list(map(int,input().split()))

path = ""

dr = (-1,0,1,1,0,-1)
dc = (0,1,1,0,-1,-1)

r,c = m-1,0

for d in move:
    nr,nc = r+dr[d],c+dr[d]

    if 0 <= nr < m and 0 <= nc < n:
        r,c = nr,nc
    path += p[r][c]

print(path)

cnt = [0] * 128
for ch in path:
    cnt[ord(ch)] = 1
num = sum(cnt)

print(num)