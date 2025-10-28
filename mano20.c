#include<stdio.h>
int main()
{
    int a;
    puts("enter any number");
    scanf("%d",&a);
    FILE *p=fopen("this01.txt","w");
    fprintf(p,"%d",a);
    puts("done");
    return 0;
}