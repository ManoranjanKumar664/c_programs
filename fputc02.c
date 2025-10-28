#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    /*
    char ch[20]="manoranjan";
    FILE *p=fopen("fputsfile01.txt","w+");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    for(int i=0;i<strlen(ch);i++)
    {
        fputc(ch[i],p);
    } */
    FILE *p=fopen("fputsfile01.txt","r");
    char ch2;
    while(feof(p)!=1)
    {
    ch2=fgetc(p);
    printf("%c",ch2);
    }
    return 0;
}