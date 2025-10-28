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
    mano m1, m2;
    puts("enter val1, val2 and float value 3");
    scanf("%d %d %d",&m1.a, &m1.b, &m1.c);
    FILE *p=fopen("mob02.txt","wb+");
    fwrite(&m1,sizeof(m1), 1, p);
    
    //fread(&m2, sizeof(m2), 1, p);
    //printf("%d",m2.a);
    return 0;
}