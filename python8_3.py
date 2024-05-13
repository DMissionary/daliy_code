import random

A = set(random.randint(0, 10) for _ in range(10))
B = set(random.randint(0, 10) for _ in range(10))
union_set = A.union(B)
setAB = A.intersection(B)
A_B = A.difference(B)
B_A = B.difference(A)

print("集合A: 内容: {0}, 长度: {1}, 最大值: {2}, 最小值: {3}".format(A, len(A), max(A), min(A)))
print("集合B: 内容: {0}, 长度: {1}, 最大值: {2}, 最小值: {3}".format(B, len(B), max(B), min(B)))
print("\nA和B的并集:{0}, 交集: {1}, 差集(A-B): {2}, 差集(B-A): {3}".format(
    union_set, setAB, A_B, B_A))
