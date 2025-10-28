#include<stdio.h>
void main()
{
    printf("hello world");
    int p[4];
    printf("enter any 4 values:");
    for(int i=0;i<4;i++)
    {
      scanf("%d",&p[i]);
    }
    printf("values are");
    for(int i=0;i<4;i++)
    {
        printf("%d",p[i]);
        printf("\n");
    }
}