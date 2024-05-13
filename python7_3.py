def is_huiwen(input_str):
    input_str = input_str.lower()
    left = 0
    right = len(input_str) - 1
    while left < right:
        if input_str[left] != input_str[right]:
            return False

        left += 1
        right -= 1

    return True

input_str = input("请输入一个字符串：")
if is_huiwen(input_str):
    print(f"{input_str} 是回文字符串")
else:
    print(f"{input_str} 不是回文字符串")
