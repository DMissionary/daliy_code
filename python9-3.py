import re

def parse_filename_data(filename):
    photo_dict = {}
    student_dict = {}

    with open(filename, 'r') as file:
        for line in file:
            # 解析文件名中的学号和图片编号
            matched = re.match(r"\[([^\]]+)\]_(\d+)\.jpg", line.strip())
            if matched:
                ids_str, photo_id = matched.groups()
                # 将学号字符串转换为列表，并去除'0'
                student_ids = [id.strip() for id in ids_str.split(',') if id.strip() != '0']
                # 更新字典：照片编号映射到学号列表
                if student_ids:
                    photo_dict[photo_id] = ','.join(student_ids)
                    # 同时更新学号出现次数的字典
                    for student_id in student_ids:
                        if student_id in student_dict:
                            student_dict[student_id] += 1
                        else:
                            student_dict[student_id] = 1

    return photo_dict, student_dict
# 假设文件名已知
filename = 'dir_100.txt'
# 解析文件
photo_dict, student_dict = parse_filename_data(filename)
# 显示照片编号到学号的映射
print("Photo to student mapping:")
for photo_id, student_ids in photo_dict.items():
    print(f"{photo_id}:{student_ids}")
# 显示学号到出现次数的映射
print("\nStudent appearance counts:")
for student_id, count in student_dict.items():
    print(f"{student_id}:{count}")
# 统计实际参加测试的人数和人均被测次数
total_students = len(student_dict)
total_counts = sum(student_dict.values())
average_tests_per_student = total_counts / total_students if total_students else 0
print(f"\n实际参加测试的人数是：{total_students}")
print(f"人均被测次数是：{average_tests_per_student:.1f}")