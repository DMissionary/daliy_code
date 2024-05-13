import sys
import math

principal = float(input("请输入本金："))
annual_interest = float(input("请输入年利率："))
year = int(input("请输入年份："))

# 计算复利
amount = principal * (1 + annual_interest / 100) ** year

# 输出结果保留两位小数
print("本金利率和为：{0:.2f}".format(amount))

