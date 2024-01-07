#include<stdio.h>
int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(x%5==0 && x%3==0);{
        printf("the number is divisible by 3 and 5");
    }
    else
        printf("the number is not divisble by 3 and 5");
    
    return 0;
}