#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char ch[100];
    puts("enter your name");
    gets(ch);
    FILE *mano=fopen("f01.txt","w");
    if(mano==NULL)
    {
        puts("file didn't opened");
        exit(1);
    }

    for(int i=0;i<strlen(ch);i++)
    {
        fputc(ch[i],mano);
    }
    fclose(mano);
    return 0;
}