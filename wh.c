#include <stdio.h>

int main() {
    int n;
    printf("请输入一个正整数 n：\n");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("1到%d的和为：%d\n", n, sum);

    return 0;
}
