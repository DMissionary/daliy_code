#include <stdio.h>
#include <math.h>
double
two_point(double a,double b,double c,double d){
	double D1,D2;
	D1=(a-c)*(a-c)+(b-d)*(b-d);
	D2=sqrt(D1);
	printf("D2=%.2f",D2);
	return 0;
}
int main(){
	two_point(2,2,3,3);
	return 0;
}
