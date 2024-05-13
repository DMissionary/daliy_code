#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu(){
	printf("***************************\n");
	printf("**********1.Start**********\n");
	printf("**********0.End************\n");
	printf("***************************\n");
}

void game(){
	int ret = rand()%100+1;
	int count = 0;
	int guess = 0;
	//printf("%d\n",ret);
	while(1){
		printf("Try to guess:");
		scanf("%d",&guess);
		count++;
		if(ret > guess){
			printf("small\n");
		}
		else if(ret < guess){
			printf("big\n");
		}
		else{
			printf("bingo!\n");
			printf("You have tried %d times.\n",count);
			break;
		}
	};
}

int main(void){
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
	menu();
	printf("Please choose:");
	scanf("%d",&input);	
	switch(input){
		case 1:
			game();
			break;
		case 0:
			printf("exit the game\n");
			break;
		default:
			printf("You choose the wrong number, Please try again!");
			break;
	}
	}
	while(input);
	return 0;
}