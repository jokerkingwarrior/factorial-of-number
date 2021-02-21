#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,c=1;
    system("cls");
    printf("enter any number");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        c=c*b;
        printf("\nfactorial of given number:%d",c);
        
    }
}