#include<stdio.h>

struct student
{
    int a;
    int b;
    int c;
};

int main()
{
    struct student s2;
    printf("enter any 3 values:");
    scanf("%d%d%d",&s2.a, &s2.b, &s2.c);
    /* 
    struct student s1;
    s1.a=40;
    s1.b=59;
    s1.c=12; */
    //puts("enter the data:");
    //scanf("%d%d%d",s1.a, s1.b, s1.c);
    //int a=40;
    FILE *p=fopen("kam01.txt","ab");
    fwrite(&s2, sizeof(s2), 1, p);
    //fclose(p);
    return 0;
}