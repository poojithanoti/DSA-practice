#include <stdio.h>

int main() {
    int num, temp, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        remainder = temp % 10;
        result += remainder * remainder * remainder;
        temp /= 10;
    }

    if(result == num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
