import sys
import math

def GetValue(b,r,n):
    v = b*(1+r)**n
    return v

b = float(input("Enter the value of b: "))
r = float(input("Enter the r:"))
n = float(input("Enter the n:"))
v = GetValue(b,r,n)
print(f"The value is:{v:.2f}")
