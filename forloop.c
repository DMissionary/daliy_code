#include <stdio.h>

void forloop(unsigned int from,unsigned int to){
	if(from>to)
	return;
	
	putchar('*');
	forloop(from+1,to);
} 

int main(int argc,char*argv[]){
	
	forloop(1,3);
	
	return 0;
}
