#include<stdio.h>

int main()
{
    char ch[100]="ramranjan";
    printf("%s",ch);
    FILE *mano=fopen("f20.txt","w");
    fputs(ch,mano);
    return 0;
}