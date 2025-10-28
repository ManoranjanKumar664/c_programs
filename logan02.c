#include<stdio.h>
#include<conio.h>

int main()
{
    char str[50]="ram";
    FILE *p=fopen("what01.txt","w");
    fputs(str,p);
    /*
    char name;
    FILE *p=fopen("what01.txt","r");
    while(!feof(p))
    {
        name=fgetc(p);
        printf("%c",name);
    } */
    return 0;
}