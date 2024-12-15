# Step 1: 輸入所有選手的事件資料
pinfo = []  # 用來存放 9 名選手的事件資料
for i in range(9):  # 模擬 9 名選手
    data = input().split()  # 每行輸入，並用空格分隔成列表
    pinfo.append(data[1:])  # 只取從第二個開始的事件，存入 pinfo

# Step 2: 輸入出局限制
b = int(input())  # 輸入出局限制值

# Step 3: 計算最多回合數
cmax = 0
for events in pinfo:  # 遍歷每位選手的事件
    if len(events) > cmax:  # 找出最長的事件數
        cmax = len(events)

# Step 4: 初始化比賽變數
score = 0  # 紀錄總得分
pout = 0   # 紀錄出局數
runner = [0, 0, 0]  # 壘上的情況（一壘、二壘、三壘）
anda = {  # 定義安打規則
    '1': [1],
    '2': [0, 1],
    '3': [0, 0, 1],
    'H': [0, 0, 0, 1]
}

# Step 5: 開始模擬比賽
for c in range(cmax):  # 模擬最多回合數
    for r in range(9):  # 模擬 9 名選手
        # 如果這名選手在這回合沒有事件，跳過
        if c >= len(pinfo[r]):
            continue

        # 取得當前事件
        token = pinfo[r][c]

        # 如果事件是出局 ("O")
        if token[1] == 'O':
            pout += 1  # 出局數 +1
            if pout >= b:  # 如果達到出局限制，結束比賽
                break
            if pout == 3:  # 如果三出局
                runner = [0, 0, 0]  # 清空壘包
                pout = 0  # 重置出局數
                b -= 3  # 減少出局限制

        # 如果事件是安打
        else:
            runner = anda[token[0]] + runner  # 更新壘包狀態
            score += sum(runner[3:])  # 計算得分（超過三壘的跑者得分）
            runner = runner[:3]  # 保留前三壘的狀態

    # 如果出局數達到限制值，結束比賽
    if pout >= b:
        break

# Step 6: 輸出最終得分
print(score)
