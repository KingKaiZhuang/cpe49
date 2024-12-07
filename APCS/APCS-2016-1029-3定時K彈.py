first_line = list(map(int,input().split()))

n,m,k = first_line

list_array = list(range(1,n+1))

current_number = 0

for i in range(k):
    current_number = (current_number + m - 1) % len(list_array)
    list_array.pop(current_number)
    current_number = current_number % len(list_array)

print(list_array[current_number])
