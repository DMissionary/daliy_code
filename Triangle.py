import sys
import math

def triangle_c(a,b):
    return math.sqrt(a*a+b*b)

a = int(input("Enter the number a:"))
b = int(input("Enter the number b:"))

c = triangle_c(a,b)

print(f"该直角三角形第三条边的长度为：{c:.2f}")