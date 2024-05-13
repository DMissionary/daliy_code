file = 'dir_100.txt'
with open(file, 'r') as file:
    lines = file.readlines()

data_dict = {}

for line in lines:
    parts = line.strip().split('_')
    if len(parts) == 2:
        id = parts[0].strip('[]').replace("'", "").split(',')
        student_ids = [int(id) for id in id if id and id != '0']
        number = int(parts[1].split('.')[0])

        if any(student_ids) and number not in data_dict:
            data_dict[number] = student_ids

for key, value in data_dict.items():
    student_ids_str = ', '.join(str(id) for id in value)
    print(f"{key}: {student_ids_str}")

student_count_dict = {}
for student_ids_list in data_dict.values():
    for student_id in student_ids_list:
        if student_id in student_count_dict:
            student_count_dict[student_id] += 1
        else:
            student_count_dict[student_id] = 1

for student_id, count in student_count_dict.items():
    print(f"{student_id}:{count}")

actual_students = len(data_dict)

total_tests = sum(len(student_ids_list) for student_ids_list in data_dict.values())

average_tests_per_student = total_tests / actual_students

print(f"实际参加测试人数：{actual_students}")
print(f"人均被测次数：{average_tests_per_student:.1f}")
