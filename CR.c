#include <stdio.h>

int main() {
    int total_heads = 35;
    int total_legs = 94;
    int chicken_count, rabbit_count;

    for (chicken_count = 0; chicken_count <= total_heads; chicken_count++) {
        rabbit_count = total_heads - chicken_count;
        int legs = 2 * chicken_count + 4 * rabbit_count;
        if (legs == total_legs) {
            printf("��������Ϊ��%d�����ӵ�����Ϊ��%d\n", chicken_count, rabbit_count);
            break;  
        }
    }

    return 0;
}

