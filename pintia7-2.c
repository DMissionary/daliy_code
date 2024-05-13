#include<stdio.h>
int main(void){
	int time;
	int during;
	int hour;
	int min;
	int time2;
	scanf("%d %d",&time,&during);
	hour=time/100;
	min=time%100;
	time2=hour*60+min+during;
	hour=time2/60;
	min=time2%60;
	printf("%d",hour*100+min);
	
	return 0;
	
}
