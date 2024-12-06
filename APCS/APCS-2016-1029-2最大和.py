first_line = list(map(int,input().split()))
n,m = first_line
total = 0
max_array = []

for i in range(n):
    read_line = list(map(int,input().split()))
    s = max(read_line)
    total += s
    max_array.append(s)

print(total)

ans_line2 = []
for j in max_array:
    if total % j == 0:
        ans_line2.append(j)
        

if ans_line2:
    print(" ".join(map(str,ans_line2)))
else:
    print("-1")