with open('score1.txt', 'r') as file:
    lines = file.readlines()

with open('score2.txt', 'w') as file:
    count = 0
    total_grade_sum = 0
    grade_counts = {'90以上': 0, '80-89': 0, '70-79': 0, '60-69': 0, '60以下': 0}  # 初始化各成绩档次的人数统计

    for line in lines:
        data = line.strip().split()
        id = data[0]
        daily_grade = int(data[1])
        final_grade = int(data[2])

        total_grade = int(daily_grade * 0.4 + final_grade * 0.6)
        total_grade_sum += total_grade
        if total_grade >= 90:
            grade_counts['90以上'] += 1
        elif 80 <= total_grade < 90:
            grade_counts['80-89'] += 1
        elif 70 <= total_grade < 80:
            grade_counts['70-79'] += 1
        elif 60 <= total_grade < 70:
            grade_counts['60-69'] += 1
        else:
            grade_counts['60以下'] += 1

        file.write(f'{id} {total_grade}\n')

        count += 1

    print(f'学生总人数为： {count} ')
    average_grade = round(total_grade_sum / count, 1)
    print(f'班级总评均分：{average_grade}')
    for grade_range, count in grade_counts.items():
        print(f'{grade_range}有: {count} 人')

