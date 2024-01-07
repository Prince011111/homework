#include<stdio.h>
int main()
{
    int l;
    printf("enter the length");
    scanf("%d",&l);
    int b;
    printf("enter the breadth");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("area is greater than perimeter");
    }
    if(a<p){
        printf("area is not greater than perimeter");
    }
    if(a==p){
        printf("area is equal to the perimeter");
    }
    return 0;
}