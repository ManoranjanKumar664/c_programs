
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
    FILE *p=fopen("new01.txt","wb");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }

    printf("enter value1 and value2 \n");
    scanf("%d",&b1.val);
    while(getchar()!='\n'); // Clear the input buffer
    scanf("%d",&b1.val2);
    
    fwrite(&b1,sizeof(b1), 1, p);

    fclose(p);
    return 0;
}
