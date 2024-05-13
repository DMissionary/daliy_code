#include <stdio.h>
void maxmin(int a[], int len, int *max, int *min){
    int i;
    *max = *min = a[0];
    for(i = 1; i<len; i++){
        if(a[i]>*max)
        *max = a[i];
    }
        if(a[i]<*min)
        *min = a[i];
}
int main(void){
    int a[] = {1,5,79,62,4461,264949,54946,18,123};
    int max,min;
    maxmin(a, sizeof(a)/sizeof(a[0]), &max, &min);
    printf("max = %d,min = %d\n",max,min);
    return 0;
}
