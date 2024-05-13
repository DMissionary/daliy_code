#include <stdio.h>
int main(){
    int index;
    int len;
    const int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    len = sizeof(arr)/sizeof(arr[0]);
    for(int index = 0; index<len; index++){
    printf("Month %d,has %d days.\n",index+1,arr[index]);
    return 0;
    } 
}
