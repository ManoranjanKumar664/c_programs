#include<stdio.h>
#include<stdlib.h>

typedef struct mano
{
    int a, b;
    float f1, f2;
}objectt;


int main()
{
 printf("manoranjan baskey \n");
 struct mano m1, m2;
 m1.a=49;
 printf("%d",m1.a);
 printf("\n");
 objectt ob1;
 ob1.a=94;
 printf("%d",ob1.a);
 return 0;
}