#include <stdio.h>

void swap(int *x,int *y){
	int temp;
	printf("Please enter the value of x and y\n");
	scanf("%d %d", x, y);
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	int x;
	int y;
	swap(&x,&y);
	printf("%d %d\n", x, y);
	return 0;
}
