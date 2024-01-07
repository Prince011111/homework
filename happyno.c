#include<stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(num > 0 || sum > 9) {
        if(num == 0){
            num = sum;
            sum = 0;
        }
        digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    (sum == 1)? printf("It is a happy number.\n"): printf("It is not a happy number.\n");
    return 0;
}