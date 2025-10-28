#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int val;
    int val2;
};

int main()
{
    struct node b1;
    //b1.val=49;
    //b1.val2=50;
    FILE *p=fopen("new01.txt","wb");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }

    printf("enter value1 and value2 \n");
    scanf("%d",&b1.val);
    //printf("enter the second value");
    while(getchar()!='\n');
    scanf("%d",&b1.val2);
    
    fwrite(&b1,sizeof(b1), 1, p);

    fclose(p);
    return 0;
    /*
    struct node a;
    a.val=40;
    a.val2=50;
    FILE *p=fopen("new01.txt","wb+");
    if(p==NULL)
        puts("file didn't open");
    
    fwrite(&a,sizeof(a),1,p);
    
    struct node b;
    while(fread(&b,sizeof(b), 1, p)>0)
    {
        fread(&b,sizeof(b),1, p);
        printf("%d %d",b.val, b.val2);
    }
    fclose(p);
    return 0;*/
}