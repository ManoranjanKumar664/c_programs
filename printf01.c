#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;
    FILE *p=fopen("g01.txt","r");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    //scanf("%d,%d",&a,&b);
    //puts("enter any two number");
    fscanf(p,"%d\n%d",&a,&b);
    printf("%d\n%d",a, b);
    return 0;
}