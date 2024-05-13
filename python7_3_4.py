def is_huiwen4(s):
    reversed_s = s[::-1]
    return s == reversed_s
input_str = input("请输入一个字符串：")
if is_huiwen4(input_str):
    print("是回文字符串")
else:
    print("不是回文字符串")
