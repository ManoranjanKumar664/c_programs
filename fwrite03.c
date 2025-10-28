#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node 
{
    int a;
    char ch;
};

int main()
{
    struct node node1;
    puts("enter any integer");
    scanf("%d",&node1.a);
    while(getchar()!='\n');
    puts("enter any character");
    scanf("%c",&node1.ch);
    while(getchar()!='\n');

    printf("%d %c",node1.a, node1.ch);

    FILE *p=fopen("myfile02.txt","ab");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    fwrite(&node1, sizeof(node1), 1, p);
    /*
    int a=40;
    FILE *p=fopen("myfile02.txt","wb");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    fwrite(&a, sizeof(a), 1, p);
    fclose(p); */
    return 0;
}