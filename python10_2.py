import csv

target_chars = ['三', '国', '演', '义']

with open('三国演义-网络版.txt', 'r', encoding='utf-8') as f:
    text = f.read()

with open('三国演义-汉字统计.txt', 'w', newline='', encoding='utf-8') as f:
    writer = csv.writer(f)
    for char in target_chars:
        char_count = text.count(char)
        writer.writerow([char, char_count])

print("已保存")
