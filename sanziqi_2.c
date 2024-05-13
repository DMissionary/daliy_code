#include <stdio.h>

void menu(){
	printf("***************************\n");
	printf("**********1.Start**********\n");
	printf("**********0.End************\n");
	printf("***************************\n");
}

int main(void){
	int input = 0;
	do{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input){
			case 1:
				printf("开始三子棋游戏");
				break;
			case 0:
				printf("退出");
				break;
			default:
				printf("选择错误");
				break;
		}
	}
		while(input);
		return 0;
}
