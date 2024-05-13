import random

a = random.randint(0,100)
b = random.randint(0,100)
c = random.randint(0,100)
nums = [a,b,c]
print(f"原始值：a={a},b={b},c={c}")

nums.sort()
print(f"(方法一)升序值：{nums}")

sorted_numbers = [min(nums), max(nums), sorted(nums)[1]]
print(f"(方法二)升序值:,{nums}")