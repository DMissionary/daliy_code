#include<stdio.h>
int main(void){
	int a;
	int b;
	int c;
	int d;
	scanf("%d",&a);
	d=(a-a%10)/10;
	c=(d-d%10)/10;
	b=(a%10)*100+((a-a%10)/10%10)*10+c;
	printf("%d",b);
	
	return 0;
}
