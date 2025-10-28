#include<stdio.h>
#include<stdlib.h>

struct node
{
    int a;
    char ch;
};

int main()
{
    struct node node1;
    FILE *p=fopen("myfile02.txt","rb");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    while(fread(&node1, sizeof(node1), 1, p))
    {
        printf("%d %c \n",node1.a, node1.ch);
    }

    return 0;
}