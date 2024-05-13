#include <stdio.h>

long long int
f4(long long int n){
	long long int ret=1;
	for(long long int i=n;i>0;i--){
		ret*=i;
		
	}
return ret;
}
int main(int argc, char** argv) {
	f4(500);
	printf("%lld");
	return 0;
}
