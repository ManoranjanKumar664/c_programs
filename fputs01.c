#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *p=fopen("fputsfile01.txt","w");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    fputs("manoranjanba",p);
    fclose(p);

    FILE *p2=fopen("fputsfile01.txt","r");
    if(p2==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    char ch[10];
    fgets(ch,4,p2);
    printf("%s",ch);
    /*
    while(fgets(ch, 2, p2)!=NULL)
    {
        printf("%s",ch);
    } */
    //puts(ch);
    return 0;
}