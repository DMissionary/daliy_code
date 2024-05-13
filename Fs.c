#include <stdio.h>

void F(int x,int arr[],int size){
	int k = 0;
	while(x != 0){
		if(x%10!=0){
			int y = x%10;
			arr[k] = y;
			k++;
			x /= 10;
			//printf("%d",y);
		}
		else{
			break;
		}
	}
}

int main(void){
	int x;
	int arr[10] = {0};
	//int res;
	int size = sizeof(arr)/sizeof(arr[0]); 
	int right = size - 1;
	printf("Please enter the number:");
	scanf("%d",&x);
	F(x,arr,size);
	for(;right>=0;right--){
		printf("%d",arr[right]);
	}
	return 0;
}
/*#include <stdio.h>

void F(int x, int arr[], int size){
	int k = 0;
	while(x != 0){
		if(x % 10 != 0){
			int y = x % 10;
			arr[k] = y;
			k++; // 增加索引k
			x /= 10;
		}
		else{
			break;
		}
	}
}

int main(void){
	int x;
	int arr[10] = {0}; // 数组大小为10，根据需要调整大小
	int size = sizeof(arr)/sizeof(arr[0]); 
	int right = size - 1;
	printf("Please enter the number:");
	scanf("%d", &x);
	F(x, arr, size);
	for(; right >= 0; right--){ // 修改循环条件
		printf("%d", arr[right]);
	}
	return 0;
}
*/