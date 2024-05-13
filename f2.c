#include<stdio.h>
unsigned int
f4(unsigned int i){
	unsigned int ret=1;
	int n;
	for(int n=i;n>0;n--)
	ret*=n;
	return ret;
} 

int main(int argc, char* argv[]){
	
	f4(5);
	printf("%d");
	return 0;
}
