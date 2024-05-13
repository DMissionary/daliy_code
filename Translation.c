#include <stdio.h>
double
translation1(double sec){
	double hours;
	double b;
	b=sec/3600;
	hours=b;
	printf("hours=%.2f\n",hours);
	return 0;
}
double
translation2(double sec){
	double mins;
	double c;
	c=sec/60;
	mins=c;
	printf("mins=%.2f\n",mins);
	return 0;
}
double
translation3(double sec){
	double d;
	d=sec;
	printf("sec=%.2f\n",sec);
	return 0;
}
int main(){
	translation1(12800.0);
	translation2(12800.0);
	translation3(12800.0);
	return 0;
}
