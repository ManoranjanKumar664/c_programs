#include<stdio.h>
typedef int a;
typedef struct
{
    int a, b;
}class;

int main()
{
    class c1, c2;
    c1.a=40;
    printf("%d \n",c1.a);
    a var=40;
    printf("%d",var);
    return 0;
}