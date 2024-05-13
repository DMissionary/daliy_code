#include <stdio.h>

int main()
{
    int price,money;

    printf("请输入金额(元):");
    scanf("%d", &price);
    printf("请输入商品价格(元):");
    scanf("%d", &money);
    int change = money - price;

    printf("找您%d元\n", change);
    printf("祝您购物愉快！欢迎下次光临。") ;
    return 0;
}
