#include<stdio.h>
int main()
{
    int x;
    printf("enter the year");
    scanf("%d",&x);
    if(x%4==0){
        printf("the year is a leap year");
    }
    else{
        printf("the year is not a leap year");
    }
    return 0;
}