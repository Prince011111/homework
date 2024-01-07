#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("enter the age of ram");
    scanf("%d",&ram);
     
    printf("enter the age of sham");
    scanf("%d",&shyam);
    
    printf("enter the age of ajay");
    scanf("%d",&ajay);
    if(ram>shyam && ram>ajay);{
        printf("ram is the youngest one");}
    else {
    printf("ram is not the youngest one")}
    return 0;
}