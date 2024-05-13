import csv

Sunsign_dict = {}

with open('SunSign.csv', 'r', encoding='utf-8') as f:
    reader = csv.reader(f)
    next(reader)
    for row in reader:
        Sunsign_dict[row[0]] = {'character': row[0], 'start_range': row[1], 'end_range': row[2]}

while True:
    user = input('请输入你的星座名称（输入"exit"退出）：')
    if user == 'exit':
        break
    elif user in Sunsign_dict:
        print(f'星座名称：{user}')
        print(f'{user}出生日期范围：{Sunsign_dict[user]["start_range"]} - {Sunsign_dict[user]["end_range"]}')
    else:
        print('输入星座名称有误！')
