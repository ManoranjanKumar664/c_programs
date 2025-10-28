#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val1;
    int val2;
};

int main()
{
    struct node b1;
    printf("enter val1 and val2");
    scanf("%d",b1.val1);
    while(getchar()!='\n');
    scanf("%d",b1.val2);

    FILE *p=fopen("new01.txt","wb");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }

    fwrite(&b1,sizeof(b1), 1, p);
    fclose(p);
    return 0;
}