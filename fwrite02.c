#include<stdio.h>
#include<stdlib.h>

struct mano
{
    int a;
    char ch[20];
    float f;
};

int main()
{
    struct mano m1;
    printf("enter any integer");
    scanf("%d",&m1.a);
    while(getchar()!='\n');
    printf("enter name");
    scanf("%s",&m1.ch);
    while(getchar()!='\n');
    puts("enter the float value");
    scanf("%f",&m1.f);
    while(getchar()!='\n');
    //printf("value of m1 are %d, %s and %lf", m1.a, m1.ch, m1.f);
    FILE *p=fopen("myfile01.txt","ab");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    fwrite(&m1, sizeof(m1), 1, p);
    fclose(p);
    return 0;
}