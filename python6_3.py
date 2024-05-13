def Num_list(lst):
    return (len(lst))

def max_value(lst):
    max_val = lst[0]
    for num in lst:
        if num > max_val:
            max_val = num
    return max_val

def min_value(lst):
    min_val = lst[0]
    for num in lst:
        if num < min_val:
            min_val = num
    return min_val

def sum_list(lst):
    total = 0
    i = 0
    while i < len(lst):
        total += lst[i]
        i += 1
    return total

def average_list(lst):
    total = 0
    for num in lst:
        total += num
    return total / len(lst)

lst = [9,7,8,3,2,1,55,6]
print(Num_list(lst))
print(max_value(lst))
print(min_value(lst))
print(sum_list(lst))
print(average_list(lst))