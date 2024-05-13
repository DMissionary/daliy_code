#include<stdio.h>
void interchange(int *x,int *y);
int main(void){
	int a = 10;
	int b = 5;
	printf("Oringinally a = %d and b = %d.\n",a,b);
	interchange(&a,&b);
	printf("Now,a=%d and b=%d",a,b);	
	return 0;
}
void interchange(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
