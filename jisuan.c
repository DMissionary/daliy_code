#include<stdio.h>
main(void){   
int a,b=0,c=0;
    printf("%d",c);
    scanf("%d",&a) ;      
     while(a>0)              
       {  b+=a%10;         
          a/=10;   }         
     printf("b=%d\n",b);
}
