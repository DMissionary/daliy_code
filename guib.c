#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	a=123;
	b=(a-a%10)/10;
	c=(b-b%10)/10;
	printf("%d",c);
	return 0;
}


