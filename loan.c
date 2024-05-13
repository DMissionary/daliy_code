#include <stdio.h>

double
loan(int year,int sum,double rate){
	int a;
	int b;
	int i;
	double ALL;
	i=year;
	A:
	if(i>0) {
	a=sum*rate;
    b+=a;
    sum=sum-2;
    i--;
    goto A;
	}
	ALL=sum+b;
	printf("%lf",ALL);

}
int main(int argc, char** argv){
	loan(5,100000,0.1);
	return 0;
}


