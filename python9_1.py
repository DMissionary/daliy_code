filename = input("请输入文件名:")

with open(filename, 'w') as f:
    while True:
        char = input("请输入字符（输入 '@' 结束）: ")
        if char == '@':
            break
        f.write(char)

print(f"输入结束，已将字符写入到 {filename} 文件中。")
