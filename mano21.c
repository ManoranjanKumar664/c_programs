#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    
    char ch[100];
    char x;
    puts("enter any name");
    gets(ch);
    FILE *pointer=fopen("file02.txt","w");
    for(int i=0;i<strlen(ch);i++)
    {
        fputc(ch[i],pointer);
    }
    fclose(pointer);

    FILE *open_pointer=fopen("file02.txt","r");
    if(open_pointer==NULL)
    {
        puts("file not opened");
        exit(1);
    }

    while(!feof(open_pointer))
    {
        x=fgetc(open_pointer);
        printf("%c",x);
    } 
    /*

    char ch;
    FILE *p=fopen("this02.txt","r+");
    if(p==NULL)
    {
        puts("file can't opened");
        exit(1);
    }
    else
    {
        while(!feof(p))
        {
            ch=fgetc(p);
            printf("%c",ch);
        }
        printf("\n");
    }
    puts("file read done");
    
    char a[100];
    puts("enter your name");
    gets(a);

    for(int i=0;i<strlen(a);i++)
    {
        fputc(a[i],p);
    }

    puts("write done"); */
    return 0;
}