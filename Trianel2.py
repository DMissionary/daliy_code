import math

# 输入直角三角形的两个直角边
a = float(input("请输入直角三角形直角边A（>0）："))
b = float(input("请输入直角三角形直角边B（>0）："))

# 计算周长
C = a + b + math.sqrt(a**2 + b**2)
print(f"三角形的周长为：{C:.1f}")

# 计算面积
A = 0.5 * a * b
print(f"三角形的面积为：{A:.1f}")

# 计算两个锐角的度数
a = math.degrees(math.atan(a / b))
b = 90 - a
print(f"第一个锐角的度数为：{a:.1f}°")
print(f"第二个锐角的度数为：{b:.1f}°")
