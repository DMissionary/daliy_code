def count(s):
    counts_1 = 0  # 英文字母的数量
    counts_2 = 0  # 数字的数量
    counts_3 = 0  # 空格的数量
    counts_4 = 0  # 其他字符的数量

    print('所有字符的数量为：', len(s), '\n')
    for char in s:
        if char.isalpha():
            counts_1 += 1
        elif char.isdigit():
            counts_2 += 1
        elif char.isspace():
            counts_3 += 1
        else:
            counts_4 += 1
    return counts_1, counts_2, counts_3, counts_4  # 返回所有的计数

s = input('请输入字符串: ')
result = count(s)  # 获取计数结果
print('英文字母出现的次数为：', result[0], '\n')
print('数字出现的次数：', result[1], '\n')
print('空格出现的次数：', result[2], '\n')
print('其他字符出现的次数：', result[3], '\n')
