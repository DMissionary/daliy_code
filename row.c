#include <stdio.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    int ar[N];
    for(int i=0;i<N;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<M;i++){
        for(int j=0;j<N-i-1;j++){
            if(ar[j]>ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("%d",ar[0]);
    for(int i=1;i<N;i++){
        printf(" %d",ar[i])
    ;}

}

