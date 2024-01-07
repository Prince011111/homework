#include<stdio.h>
int main()
{
    int sp;
    printf("enter selling price");
    scanf("%d",&sp);
    int cp;
    printf("enter cost price");
    scanf("%d",&cp);
    if(sp>cp)
    {
        printf("profit");
    }
    if(cp>sp){
        printf("loss");
    }
    if(sp==cp)
    printf("no profit no loss");
    return 0;
}