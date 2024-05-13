#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
const int MAX_SIZE =1000;

typedef int ElemType;
typedef int Status;

typedef struct{
    ElemType *p;
    int length;
    int maxSize;
}SqList;

Status InitList(SqList *list){
    list->p=(ElemType*)malloc(sizeof(ElemType)*MAX_SIZE);
    if(!list->p){
        return 0;
    };
    list->length=0;
    return OK;
};

Status TraversalList(SqList list){
    int i = 0;
    for(;i<list.length;i++){
        printf("%d\t%d\n",i+1,list.p[i]);
    }
    return OK;
}

Status CreatList(SqList *list,ElemType arrList[],int length){
    for(int i=0;i<length;i++){
        list->p[i] = arrList[i];
    }
    list->length=length;
    return OK;
}

Status GetLength(SqList list){
    if(list.p){
        return list.length;
    }
}

void InsertNum(SqList *list,int j){
    for(int i = 0;i<list->length;i++){
        scanf("%d",&j);
        list->p[i] = j;
    }
}

Status IsEmpty(SqList list){
    if(list.p){
        printf("不为空");
    } else{
        printf("为空");
    }
}

Status LocalList(SqList list,int i){
    if(i<1||i>list.length){
        return ERROR;
    }else{
        return list.p[i-1];
    };
    printf("%d",list.p[i]);
}

int main(){
    SqList list_1,list_2;
    InitList(&list_1);
    InitList(&list_2);
    ElemType arr_1[] = {1,5,9,6,8};
    ElemType arr_2[] = {1,8,9,10,15,16,78};
    CreatList(&list_1,arr_1,5);
    CreatList(&list_2,arr_2,7);
    InsertNum(&list_1,5);
    IsEmpty(list_1);
    GetLength(list_1);
    printf("表长为：%d",list_1.length);
    InsertNum(&list_1,5);
    LocalList(list_1,3);
    printf("第三位数字是:%d",list_1.p[2]);
}
