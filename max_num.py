import random

def gcd(a, b):

    while b:
        a, b = b, a % b
    return a


num1 = random.randint(0, 100)
num2 = random.randint(0, 100)


if num1 < num2:
    num1, num2 = num2, num1

result = gcd(num1, num2)
print(f"随机生成的数字 {num1} 和 {num2} 的最大公约数是 {result}。最小公倍数是：{num1*num2//result}")
