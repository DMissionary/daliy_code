#include <stdio.h>
#include <math.h>

int isNarcissisticNumber(int num, int numDigits) {
    int originalNum = num;
    int sum = 0;
    int digit;

    while (originalNum != 0) {
        digit = originalNum % 10;
        sum += pow(digit, numDigits);
        originalNum /= 10;
    }

    return (sum == num);
}

int main() {
    printf("Enter the number of digits: ");
    int numDigits;
    scanf("%d", &numDigits);

    int start = pow(10, numDigits - 1);
    int end = pow(10, numDigits) - 1;

    printf("Narcissistic numbers with %d digits:\n", numDigits);

    for (int num = start; num <= end; num++) {
        if (isNarcissisticNumber(num, numDigits)) {
            printf("%d\n", num);
        }
    }

    return 0;
}

