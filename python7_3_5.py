def is_huiwen5(s):
    if len(s) <= 1:
        return True
    if s[0] != s[-1]:
        return False
    return is_huiwen5(s[1:-1])

input_str = input("请输入一个字符串：")
if is_huiwen5(input_str):
    print("是回文字符串")
else:
    print("不是回文字符串")
