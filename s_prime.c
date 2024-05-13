#include <stdio.h>
#include <stdbool.h>

int is_prime(int x){
int i=2,flase=1,ture=0;
	if(x<i){
	printf("true");
	if(x%i!=0){
	i++;
			goto goon;	
	}
		return 0;
			}	
			{
			
	}
	goon:
		printf("flase");
		return 0;
	
}
int main(x){
	is_prime(1);
	return 0;
}
