#include<stdio.h>
void main()
{
    int x=50;
    printf("%d",x);
    int *p=&x;
    printf("\n %u",p);
    int y=*p;
    printf("\n %d",*&x);
}