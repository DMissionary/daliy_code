#include <stdio.h>

int main()
{
    int price,money;

    printf("��������(Ԫ):");
    scanf("%d", &price);
    printf("��������Ʒ�۸�(Ԫ):");
    scanf("%d", &money);
    int change = money - price;

    printf("����%dԪ\n", change);
    printf("ף��������죡��ӭ�´ι��١�") ;
    return 0;
}
