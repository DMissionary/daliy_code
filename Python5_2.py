arr = []

for i in range(1,1000):
    if i%3==2 and i%5==3 and i%7==2:
        arr.append(i)

print(f"0~1000中用3除余2，用5除余3，用7除余2的数有：\n{arr}")

