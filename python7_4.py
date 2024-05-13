def checkcode(id_number):
    id_digits = [int(digit) for digit in id_number[:17]]

    weights = [7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2]

    check_codes = ['1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2']

    weighted_sum = 0
    for digit, weight in zip(id_digits, weights):
        weighted_sum += digit * weight

    check_code = weighted_sum % 11

    return check_codes[check_code]


id_number = input("请输入身份证号码前17位数字：")
if len(id_number) != 17 or not id_number.isdigit():
    print("输入的格式不正确。")
else:
    check_code = checkcode(id_number)
    print("校验码是：", check_code)
