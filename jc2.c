#include<stdio.h>

unsigned int
f2(unsigned int n){
	unsigned int ret=1;
	while(n>0){
	ret*=n--;
	}
	
	return ret;
}
int main(){
	f2(5);
	printf("%d");
	return 0;
}
