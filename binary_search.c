#include <stdio.h>

int get_array_length(int arr[], int n) {
    return sizeof(arr) / sizeof(arr[0]);
}

int binary_search(int arr[],int target,int length){
	int left = 0;
	int right = length - 1;
	int mid;
	while(left <= right){
		mid = (left + right) / 2;
		if(arr[mid] == target){
			return mid;
		}else if(arr[mid] < target){
			left = mid + 1;
			
		}else if(arr[mid] > target){
			right = mid - 1;
		}
	}
	return -1;
}
int main(void){
	int arr[] = {1,3,5,7,9,11,13,17,19};
	int target = 11;
	int length = sizeof(arr) / sizeof(arr[0]);
	printf("要找的数字%d在数组中的位置是%d",target,binary_search(arr,target,length));
	return 0;
}

