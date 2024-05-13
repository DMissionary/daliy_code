def a(n):
    x = []

    for i in range(n):
        row = [1]
        if i > 0:
            for j in range(1, i):
                row.append(x[i - 1][j - 1] + x[i - 1][j])
            row.append(1)
        x.append(row)
    return x

def b(x):
    maxwidth = len(' '.join(map(str, x[-1])))
    for row in x:
        row_str = ' '.join(map(str, row)).center(maxwidth)
        print(row_str)

n = 5
x = a(n)
b(x)