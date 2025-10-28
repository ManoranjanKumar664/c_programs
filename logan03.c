#include<stdio.h>

int main()
{
    int a=40;
    int b=50;
    //printf("%d\n%d",a, b);
    //int a=60;
    FILE *p=fopen("what01.txt","w");
    fprintf(p, "%d  and %d",a, b);
    //fwrite(&a, sizeof(a), 1, p);
    return 0;
}