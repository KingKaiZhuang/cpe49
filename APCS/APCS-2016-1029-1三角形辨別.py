n = input()

triangle_side = list(map(int,n.split()))

for i in range(len(triangle_side)):
    for j in range(len(triangle_side)-1-i):
        if triangle_side[j] > triangle_side[j+1]:
            tmp = triangle_side[j]
            triangle_side[j] = triangle_side[j+1]
            triangle_side[j+1] = tmp

a, b, c = triangle_side

print(f"{a} {b} {c}")

if a + b <= c:
    print("No")
    quit()


if a * a + b * b < c * c:
    print("Obtuse")
elif a * a + b * b == c * c:
    print("Right")
else:
    print("Acute")
