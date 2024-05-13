def list(input_str):
    values = []
    for char in input_str:
        values.append(ord(char))
    return values

input_str = input("请输入一个字符串：")
result = list(input_str)
print("输入字符串每个字符的ASCII码列表为：", result)
