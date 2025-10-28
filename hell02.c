#include<stdio.h>
#include<stdlib.h>

int main()
{
    int b;
    FILE *p=fopen("mob01.txt","rb");
    fread(&b,sizeof(b),1, p);
    printf("%d",b);
    return 0;
}