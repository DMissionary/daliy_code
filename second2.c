#include <stdio.h>

int
min(int a,int b){
	if(a>b){
		return b;
	}else
	return a;
}
int
max(int a,int b){
	if(a>b){
		return a;
	}else
	return b;
}
int
max3(int a,int b,int c){
	return max(max(a,b),c);
}
int
mid3(int a,int b,int c){
	int one = max(a,b);
	int two = min(a,b);
	if(one>c){
		return max(two,c);
	}else
	return one;
}
int
second_number(int a,int b,int c,int d,int e){
	int one = max(a,b);
	int two = min(a,b);
	int three = max3(c,d,e);
	int four = mid3(c,d,e);
	if(one>three){
		return max(two,three);
	}
else
return max(one,four);
}
int main(void){
	int i,a,b,c,d,e;
	i = second_number(a,b,c,d,e);
	scanf("%d%d%d%d%d",a,b,c,d,e);
	printf("%d",i);
    return 0;
	
}
