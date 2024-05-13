/*#include <stdio.h>

int leap(int year,int eyear){
	for(;year<=eyear;year++){
		if(year%400==0){
			return 0;
		}
	}
	return 1;
}

int main(void){
	int year;
	int eyear;
	scanf("%d %d",&year,&eyear);
	leap(year,eyear);
	printf("The leap year:%d",year);
	return 0; 
}*/
#include <stdio.h>

int leap(int year, int eyear,int leapYears[]) {
	int count = 0;
    for (; year <= eyear; year++) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            leapYears[count] = year;
            count++;
        }
    }
    return count;
}

int main(void) {
    int year;
    int eyear;
    printf("Please enter the start year and the end year:\n");
    scanf("%d %d", &year, &eyear);
    int MaxLeapYears = eyear-year-1;
    int leapYears[MaxLeapYears];
    int NumOfleapYears = leap(year,eyear,leapYears);
    int *pc = &NumOfleapYears;
    for(int i=0;i<=NumOfleapYears;i++){
    	printf("The leap year:%d\n",leapYears[i]);
	}
	printf("The total leap year during these years are:%d",*pc);
    return 0;
}

/*#include <stdio.h>

int leap(int year, int eyear, int leapYears[]) {
    int count = 0; // 闰年计数器

    for (; year <= eyear; year++) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            leapYears[count] = year; // 存储闰年
            count++; // 递增计数器
        }
    }

    return count; // 返回闰年的数量
}

int main(void) {
    int year;
    int eyear;

    printf("Enter the range of years: ");
    scanf("%d %d", &year, &eyear);

    int maxLeapYears = eyear - year + 1; // 最大闰年数量
    int leapYears[maxLeapYears]; // 存储闰年的数组

    int numOfLeapYears = leap(year, eyear, leapYears);

    printf("Leap years:");
    for (int i = 0; i < numOfLeapYears; i++) {
        printf(" %d", leapYears[i]);
    }
    printf("\n");

    return 0;
}
*/