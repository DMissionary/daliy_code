#include <stdio.h>

int main(){
	sum(1,5);
	
	return 0;
}

void sum(int begin,int end){
	int i;
	int sum = 0;
	for(i=begin;i<=end;i++){
		sum += i;
	}
	printf("%d��%d�ĺ���%d\n",begin,end);
}



