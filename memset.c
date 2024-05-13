#include <stdio.h>
#include <string.h>
int main(void){
	char arr[] = "hello horzon!";
	memset(arr,'x',5);
	printf("%s",arr);
	return 0;
}