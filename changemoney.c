#include <stdio.h>
double
change1(double a){
	double b;
	b=a/100;
	c=a%100;
	printf("need 100 yuan=%f",b);
	return c;
}
double
change2(double a){
	double e;
	d=c/50;
	e=c%50;
	printf("need 50 yuan=%f",d);
	return e;
}
double
change3(double a){
	double g;
	f=e/20;
	g=e%20;
	printf("need 20 yuan=%f",e);
	return g;
}
double
change4(double a){
	double i;
	h=g/10;
	i=g%10;
	printf("need 10 yuan=%f",h);
	return i;
}
double
change5(double a){
	double k;
	j=i/5;
	k=i%5;
	printf("need 5 yuan=%f",j);
	return k;
}
double
change6(double a){
	double m;
	l=k/2;
	m=k%2;
	printf("need 2 yuan=%f",l);
	return m;
}
double
change7(double a){
	o=g/1;
	printf("need 1 yuan=%f",o);
	return 0;
}
int main(){
	change1(7459);
	return 0;
	
}
