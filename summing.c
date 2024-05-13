#include <stdio.h>
#include <stdlib.h>
int main(void){
	long num;
	long sum = 0L;
	int status;
	
	printf("Please enter an integer to be summed：");
	status = scanf("%ld",&num);
	while(status == 1)
	{
		sum = sum + num;
		printf("Please enter next integer(Enter any alphabet can end the circle): ");
		printf("%ld",status);
		status = scanf("%ld",&num);
		
	}
	printf("Those integers sum to %ld.\n",sum);
	printf("只能说编程能力有待提高。。。。\n"); 
	system("pause");
	return 0;
}
