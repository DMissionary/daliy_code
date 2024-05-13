#include <stdio.h>

int main(){
    int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;
    for(index = 0; index<sizeof(arr)/sizeof(arr[0]); index++)
    printf("Month %d,has %d days.\n",index+1,arr[index]);
    return 0;
}

