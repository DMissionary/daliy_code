#include <stdio.h>

int get_array_length(int arr[], int n) {
    return sizeof(arr) / sizeof(arr[0]);
}

int linear_search(int arr[], int target,int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            printf("目标值 %d 在数组中的位置为 %d\n", target, i);
            return i; 
        }
    }
    printf("目标值 %d 未找到\n", target);
    return -1; 
}

int main(void) {
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    linear_search(arr, target,length);
    return 0;
}

