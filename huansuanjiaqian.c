#include<stdio.h>

int
change1(int a){
	int a1,a2;
	a1=a/100;
	a2=a%100;
	printf("need 100 yuan=%d\n",a1);
	return a2;
}
 int 
change2(int a){
    int b,int b2,int b3,int a1;
 	b=a-100*a1;
 	b2=b/50;
 	b3=b%50;
 	printf("need 50 yuan=%d",b2)
 	return b3;
}
int
change3(int a){
	int c,c2,c3,b2,a1;
    c=a-100*a1-b2*50;
    c2=c/20;
    c3=c%20;
 	printf("need 20 yuan=%d\n",c);
 	return c3;
}
 int
change4(int a){
	int d,d2,d3,b2,a1,c2;
    d=a-a1*100-b2*50-c2*20;
    d2=d/10;
    d3=d1%10;
 	printf("need 10 yuan=%d\n",d2);
 	return d3;
	
}
int
 change5(int a){
 	int e,e2,e3,d2,c2,b2,a1;
 	e=a-a1*100-b2*50-c2*20-d2*10;
 	e2=a/5;
 	e3=e2%5;
 	printf("need 5 yuan=%d\n",e2);
 	return e2;
 }
int
 change6(int a){
 	int f,f2,f3,e2,d2,c2,b2,a1;
  	f=a-a1*100-b2*50-c2*20-d2*10-e2*5;
  	f2=f/2;
  	f3=f%2;
 	printf("need 2 yuan=%d\n",f2);
 	return f2;
 }
int
change7(int a){
	int g,g2,f2,e2,d2,c2,b2,a1;
  	g=a-a1*100-b2*50-c2*20-d2*10-e2*5-f2*2;
  	g2=g/1;
 	printf("need 1 yuan=%d\n",g);
 	return g;
}
int main()
{
	change1(7459);
	change2(7459);
	change3(7459);
	change4(7459);
	change5(7459);
	change6(7459);
	change7(7459);
	return 0;
}
