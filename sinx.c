#include <stdio.h>
#include <math.h>

int
fac(int a){
	int n;
	double sum=1;
	for(a=1;a<=n;a++)
	sum=sum*a;
}
int
x_fac(int x,int n){
     for(x=1;x<=n;x++)
     x*=n;
}
double
sin(double x){
	double n;
	n==x-x_fac(x,3)/fac(3)+x_fac(x,5)/fac(5)-x_fac(x,7)/fac(7);
	printf("sin=%lf",n);
	return n;
}
double 
cos(double x){
	double m;
	m==sqrt(1-sin(x)*sin(x));
	printf("cos=%lf",m);
	return m;
}
int main(){
	printf("%lf\n",sin(45));
	printf("%lf",cos(0));
	return 0;
}
