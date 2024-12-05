flag = 1


while True:
    try:
        n = input()
        b2_list = list(map(int, input().split()))
        save_list = set()
        is_b2 = True

        for i in range(len(b2_list) - 1):
            if b2_list[i] >= b2_list[i + 1]:
                is_b2 = False
                break

        for i in range(len(b2_list)):
            for j in range(i, len(b2_list)):
                if b2_list[i] + b2_list[j] in save_list:
                    is_b2 = False
                    break
                else:
                    save_list.add(b2_list[i] + b2_list[j])

        if is_b2:
            print(f"Case #{flag}: It is a B2-Sequence.")
        else:
            print(f"Case #{flag}: It is not a B2-Sequence.")

        flag += 1
    
    except:
        break