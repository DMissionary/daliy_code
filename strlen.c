#include <stdio.h>

size_t strlen(const char *s){
    size_t n = 0;
    scanf("%s",&s);
    while(*s++)
    n++;
    return n;
}

int main(void){
	int n;
    //strlen("hello");
    printf("%d",strlen("*s"));
    return 0;
}
