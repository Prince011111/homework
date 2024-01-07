#include<stdio.h>
int main()
{
    int a;
    printf("enter the first side");
    scanf("%d",&a);
    int b;
    printf("enter the second side");
    scanf("%d",&b);
    int c;
    printf("enter the third side");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("valid triangle");
    }
    else
    printf("invalid triangle");
    return 0;
}