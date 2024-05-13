#include <stdio.h>
double
circle(double r){
	double C;
	double S;
 	C=2*3.14*r;
	S=3.14*r*r; 
	printf("C=%.4f,S=%.4f",C,S);
	 
	return 0;
}
int main(){
	circle(5.0);
	return 0;
}
