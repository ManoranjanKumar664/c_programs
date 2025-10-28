#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x=49;
    printf("%d\n",x);
    int *p=&x;
    int **q=&p;
    printf("%d",**q);
    return 0;
}