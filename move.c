#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(void){
	char arr1[] = "Welcome to bit !!!";
	char arr2[] = "##################";
	int left = 0;
	int right = strlen(arr1)-1;
	while(left<=right){
	arr2[left] = arr1[left];
	arr2[right] = arr1[right];
	printf("%s\n",arr2);
	sleep(1);
	system("cls");
	left++;
	right--;
	}
	return 0;
}