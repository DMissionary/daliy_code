#include<stdio.h>


int
max(int a,int b,int c){
	printf("please enter three integers:\n");
if(a>b) 	{ 
	if(a>c)  printf("The max is %d\n",a);
	}
if(b>c){
	printf("The max is %d\n",b);
	}     
    else {
	printf("The max is %d\n",c);
     }
	
}
int main(void)
{

max(38,54,18);
return max;
}
