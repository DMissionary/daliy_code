def is_zimishu(num):
    n = len(str(num))
    total = sum(int(i) ** n for i in str(num))
    return total == num


def find_zimishu(start, end):
    zimishu = []
    for num in range(start, end + 1):
        if is_zimishu(num):
            zimishu.append(num)
    return zimishu


for i in range(1, 11):
    start = 10 ** (i - 1)
    end = 10 ** i - 1
    zimishu = find_zimishu(start, end)

    if i == 1:
        print(f"独身数有{len(zimishu)}个：{zimishu}")
    elif i == 2:
        print("两位数没有自幂数")
    elif i == 3:
        print(f"水仙花数有{len(zimishu)}个：{zimishu}")
    elif i == 4:
        print(f"四叶玫瑰花数有{len(zimishu)}个：{zimishu}")
    elif i == 5:
        print(f"五角星数有{len(zimishu)}个：{zimishu}")
    elif i == 6:
        print(f"六合数有{len(zimishu)}个：{zimishu}")
    elif i == 7:
        print(f"北斗七星数有{len(zimishu)}个：{zimishu}")
    elif i == 8:
        print(f"八仙数有{len(zimishu)}个：{zimishu}")
    elif i == 9:
        print(f"九九重阳数有{len(zimishu)}个：{zimishu}")
    elif i == 10:
        print(f"十全十美数只有{len(zimishu)}个：{zimishu}")
