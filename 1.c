#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the selling price:");
    scanf("%d",&a);
    printf("enter the cost of the article: ");
    scanf("%d",&b);
    c=a-b;
    printf("the profit is %d",c);
    getch();
}
