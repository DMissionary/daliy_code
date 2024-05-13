#include<stdio.h>
int
f2(int n){
	int ret=1;
	loop:
	if(n>0){
		ret*=n;
		n--;
			goto loop;
	return ret;
	}
	else if(n<0){
		return 1;
	}
}

int main(int argc, char* argv[]){
	f2(5);
    printf("%d",f2(5));
	return 0;
}

