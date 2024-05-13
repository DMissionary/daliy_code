#include <stdio.h>
#define days_per_year 365

int main(void)
{
int ages,years;
printf("请输入你的年龄：");
getchar();
scanf("%d",&ages);
int days=ages*365;
printf("你的年龄换算为天数为：""%d\n",days);
scanf("%d",days);
return 0;
}
