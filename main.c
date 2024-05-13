#include <stdio.h>

unsigned int
f3(unsigned int n){
	unsigned int ret=1;
	
	that:
		if(n>0){
			ret*=n;
			n--;
			goto that;
		}
		return ret;
		
}
int main(){
	f3(3);
	printf("%d",f3);
	return 0;
}
