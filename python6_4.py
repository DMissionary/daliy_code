def pow_lst(lst):
    print("变换前，s=：", lst)
    for i in range(len(lst)):
        if(lst[i] % 2) == 0:
            lst[i] = lst[i]*lst[i]
    print("变换后，s=：", lst)
    return lst

lst = [9,7,8,3,2,1,5,6]
pow_lst(lst)
