def remove_duplicates(lst):
    result = []
    for x in lst:
        if x not in result:
            result.append(x)
    return result

lst = [1, 5, 6, 3, 3, 3, 9, 9, 4, 4]
print(remove_duplicates(lst))
