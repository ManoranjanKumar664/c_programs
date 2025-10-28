#include<stdio.h>
int sum(int a, int b);
int sum3(int a, int b, int c);

void main()
{
 int a=60;
 int b=80;
 int c=90;
 int d=a>b<c;
 printf("%d",d);
 a>b?printf("a is greater"):printf("b is greater");
 int return_value=sum(90, 70);
 printf("\n %d",return_value);
 int return_value2=sum3(9,1,4);
 printf("\n %d",return_value2);
}

int sum(int a, int b)
{
    int c=a+b;
    return c;
}
int sum3(int a, int b, int c)
{
    int d=a+b+b;
    return d;
}