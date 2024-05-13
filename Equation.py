import math

a = float(input("Enter a number for a: "))
b = float(input("Enter a number for b: "))
c = float(input("Enter a number for c: "))

def equation(a, b, c):
    x1, x2 = 0.0, 0.0  # 直接声明 x1 和 x2 为 float 类型
    if a == 0 and b == 0:
        print("此方程无解！")
    elif a == 0 and b != 0:
        x1 = -(c / b)
        x2 = 0
        print(f"此方程有一个实根：{x1:.1f}")
    elif b * b - 4 * a * c == 0:
        x1 = x2 = -(b / 2 / a)
        print(f"此方程有两个相等实根：{x1:.1f}")
    elif b * b - 4 * a * c > 0:
        x1 = -(b / 2 / a) + math.sqrt(b * b - 4 * a * c) / 2 / a
        x2 = -(b / 2 / a) - math.sqrt(b * b - 4 * a * c) / 2 / a
        print(f"此方程有两个不等实根：{x1:.1f} 和 {x2:.1f}")
    elif b * b - 4 * a * c < 0:
        real_part = -(b / 2 / a)
        imaginary_part = math.sqrt(abs(b * b - 4 * a * c)) / 2 / a
        x1 = complex(real_part, imaginary_part)
        x2 = complex(real_part, -imaginary_part)
        print(f"此方程有两个不等虚根：{x1:.1f} 和 {x2:.1f}")

# 调用方程函数
equation(a, b, c)
