def peach_count(day, peaches):
    print(f"第{day}天桃子数为：{peaches}")
    if day == 1:
        return peaches
    else:
        return peach_count(day - 1, (peaches + 1) * 2)

total_peaches = peach_count(8, 1)

