pinfo = []
for i in range(9):
    data  = input().split()
    pinfo.append(data[1:])

b = int(input())

cmax = 0

# ['1B', '1B', 'FO', 'GO', '1B']
# ['1B', '2B', 'FO', 'FO', 'SO']
# ['SO', 'HR', 'SO', '1B']
# ['FO', 'FO', 'FO', 'HR']
# ['1B', '1B', '1B', '1B']
# ['GO', 'GO', '3B', 'GO']
# ['1B', 'GO', 'GO', 'SO']
# ['SO', 'GO', '2B', '2B']
# ['3B', 'GO', 'GO', 'FO']

for events in pinfo:
    if len(events) > cmax:
        cmax = len(events)

score, pout, runner = 0, 0, [0,0,0]
anda = {
    '1': [1],
    '2': [0,1],
    '3': [0,0,1],
    'H': [0,0,0,1]
}

for c in range(cmax):
    for r in range(9):
        token = pinfo[r][c]
        if token[1] == 'O':
            pout += 1
            if pout >= b:
                break
            if pout == 3:
                runner = [0,0,0]
                pout = 0
                b -= 3
        else:
            runner = anda[token[0]]  + runner
            score += sum(runner[3:])
            runner = runner[:3]
    if pout >= b:
        break

print(score)