#include <stdio.h>

void
hanoi_solver(unsigned int 32_t n,char from_pole,char accessory_pole,char to_pole,char to_pole){
	
	if(1==n){
		move(from_pole,to_pole);
		return;
	}
	hanoi_solver(n-1,from_pole,to_pole,accessory_pole);
	move(from_pole,to_pole);
	hanoi_solver(n-1,accessory_pole,to_pole);
}
void
move(char from_pole,char to_pole){
	printf("%c->%c\n",from_pole,to_pole);
}
