#include<stdio.h>
#include<stdlib.h>

typedef struct a
{
    int a;
    int b;
    float c;
}mano;

int main()
{
    mano m2;
    FILE *p=fopen("mob02.txt","rb");
    while(fread(&m2, sizeof(m2), 1, p))
        printf("%d %d %f",m2.a, m2.b, m2.c);
    return 0;
}