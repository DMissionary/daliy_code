import math
sum = 0

for i in range(64):
    sum += pow(2,i)

print(f"国际象棋64个格子中总的麦粒数量为：{sum}")