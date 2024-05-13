#include <stdio.h>

struct stu{
    char name[20];
    int age;
    double score;
} s = {"张三", 18, 85.5};

int main(void){
    printf("%s %d %lf\n", s.name, s.age, s.score);
    return 0;
}
