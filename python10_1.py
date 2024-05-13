import csv

with open('Name.txt', 'r', encoding='utf-8') as f:
    all_students = [line.strip() for line in f]

with open('1.csv', 'r', encoding='utf-8') as f:
    csv_reader = csv.reader(f)
    present_students = [row[0] for row in csv_reader]

absent_list = [student for student in all_students if student not in present_students]

for student in absent_list:
    print(student)
