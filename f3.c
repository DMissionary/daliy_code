#include<stdio.h>

unsigned int
f3(unsigned int n){
	unsigned int ret=1;
	if(n>0){
		ret*=n;
		n--;
		return ret;
	}
	else
	return 0;
}

int main(int argc, char* argv){
	f3(5);
	printf("%d");
	return 0;
}
