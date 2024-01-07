#include<stdio.h>
int main()
{
    int x;
    int y;
    int z;
    printf("enter the 1st number");
    scanf("%d",&x);
    printf("enter the second number");
    scanf("%d",&y);
    printf("enter the third number");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("%d is the greatest number",x);
    }
    if(y>x && y>z){
        printf("%d is the greatest number",y);
    }
    if(z>x && z>y){
        printf("%d is the greatest number",z);
    }
    
    return 0;
}