#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n<99 && n>1000){
        printf("the number is a three digit number");
    }
    else{
        printf("the number is not a three digit number");
    }
    return 0;
}