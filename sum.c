#include <stdio.h>

int sum(int n);

int main(){
	int n;
	printf("Please enter the value of n:\n");
	scanf("%d",&n);
	printf("%d", sum(n));
	return 0;
}

int sum(int n){
	int sum = 0;
	if(n > 0 && n <= 2){
		sum = n + (n-1);
	}else if(n>2){
		for(;n>0;n--){
			sum += n;
		}
	}
	return sum;
}
