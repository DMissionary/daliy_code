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
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input){
			case 1:
				printf("��ʼ��������Ϸ");
				break;
			case 0:
				printf("�˳�");
				break;
			default:
				printf("ѡ�����");
				break;
		}
	}
		while(input);
		return 0;
}
