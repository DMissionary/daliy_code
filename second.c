#include <stdio.h>

int
max(int a,int b){
	if(a>b){
	return a;
    else
	return b;
	}
int 
max2(int a,int b,int c){
	return max(max(a,b),c)
}
int
max3(int a,int b,int c,int d){
	return max(max(max(a,b),c),d);
    i=max3;
}
int
max4(int a,int b,int c,int d,int e){
	if(i>e)
	return e;
	else
	return i;
}
int main(void){
int a=1 ,int b=2,int c=3,int d=4,int e=5;
i=max3(1,2,3,4);
int = second;
printf("%d",second);
return 0;
}

