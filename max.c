#include <stdio.h>


int main(void){
	int a,b,c;
	int max;
	printf("Please enter three number:");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b){
		if(a>c)
		max=a;
		else
		max=c;
	}else{
		if(b>c)
		max=b;
		else
		max=c;
	}
	printf("max=%d\n",max);
	printf("¿´ÎÒÅ£±Æ²»Å£±Æ£¡£¡£¡£¡"); 

	return 0;
}
