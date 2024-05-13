days_dict = {
    "Monday": 1,
    "Tuesday": 2,
    "Wednesday": 3,
    "Thursday": 4,
    "Friday": 5,
    "Saturday": 6,
    "Sunday": 7
}
values_list = list(map(str,days_dict.values()))
values_str = ", ".join(values_list)
print(values_str)

keys_list = list(days_dict.keys())
keys_str = ", ".join(keys_list)
print(keys_str)

key_value_list = list(days_dict.items())
key_value_str = ", ".join([f"({i}, {j})" for i, j in key_value_list])
print(key_value_str)