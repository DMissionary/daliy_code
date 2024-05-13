/*#include <stdio.h>

int main(void){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = (right + left)/2;
	int k;
	
	printf("Please enter the number:");
	scanf("%d",&k);
	while(left<=right){
		int mid = left + (right - left)/2;
	if(arr[mid] > k){
		right = mid - 1;
	}
	else if(arr[mid] < k){
		left = mid + 1;
	}
	else{
		printf("%d\n",mid);
		break;
	}
	}
	if(left>right){
		printf("can not found\n");
	}
	return 0;
}*/

#include <stdio.h>

int bin(int k,int arr[],int sz){
	int right = sz - 1;
	int left = 0;
	while(left<=right){
		int mid = (left+right)/2;
		if(arr[mid] < k){
		left = mid + 1;
	}
	else if(arr[mid] > k){
		right = mid - 1;
	}
	else{
		return mid;
		break;
	}
	}
	return -1;
}

int main(void){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k;
	int sz = sizeof(arr)/sizeof(arr[0]);
	printf("Please enter the number you want to search:");
	scanf("%d",&k);
	int res = bin(k,arr,sz);
	if(bin(k,arr,sz)!=-1){
		printf("The number is found at index:%d\n",res);
	}
	else{
		printf("The number is not found.\n");
	}
	return 0;
}

























