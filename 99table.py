def print_upper_triangle():
    for i in range(1, 10):
        for j in range(i, 10):
            print(f"{i} * {j} = {i * j}\t", end="")
        print()

print("上三角形式：")
print_upper_triangle()

def print_lower_triangle():
    for i in range(1, 10):
        for j in range(1, i + 1):
            print(f"{i} * {j} = {i * j}\t", end="")
        print()

print("\n下三角形式：")
print_lower_triangle()

def print_rectangle():
    for i in range(1, 10):
        for j in range(1, 10):
            print(f"{i} * {j} = {i * j}\t", end="")
        print()

print("\n矩形块形式：")
print_rectangle()
