#include <stdio.h>

void swap(int *pa,int *pb){
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main(void){
	int a;
	int b;
	scanf("%d %d",&a,&b);
	printf("First: a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("Second: a=%d b=%d\n",a,b);
	
	return 0;
} 