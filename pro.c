#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int
add(int a, int b){
	return a+b;
}
int main(int argc,char** argv){
	
	assert(argc == 3);
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	
	printf("%d\n",add(a,b));
	
	return 0;
}
