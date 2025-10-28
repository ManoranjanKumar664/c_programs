#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char ch[40]="manoranjanbaskey";
    FILE *p=fopen("what01.txt","w");
    for(int i=0;i<strlen(ch);i++)
    {
        fputc(ch[i],p);
    }
    /*
    char ch[50];
    gets(ch);
    //puts("ranjanbaskey");
    puts(ch);

    char name[50];
    puts("enter any string");
    gets(name);
    puts(name); */
    return 0;
}