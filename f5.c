#include<stdio.h>

long long int
f5(long long int i){
	long long int n=1;
	while(i>0){
		n*=i;
		i--;
	}
	return n;
}

int main(int argc, char* argv[]){
	f5(500);
	printf("%d",f5(500));
	return 0;
}
