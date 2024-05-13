#include<stdio.h>
interchange(int *x,int *y)
int main(void){
	int a = 10;
	int b = 5;
	interchange(a,b);
	printf("Now,a=%d and b=%d",a,b);
	return 0;
}
interchange(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return 0;
}
