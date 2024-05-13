def is_huiwen3(s):
    s_list = list(s)
    s_list.reverse()
    reversed_s = ''.join(s_list)
    return s == reversed_s

# 测试
input_str = input("请输入一个字符串：")
if is_huiwen3(input_str):
    print("是回文字符串")
else:
    print("不是回文字符串")
