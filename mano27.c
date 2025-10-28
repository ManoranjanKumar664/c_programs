#include<stdio.h>
#include<stdlib.h>

typedef struct mano
{
    int a;
    double d;
}person;

struct hello
{
    int x;
    int y;
    int z;
};

int main()
{
    struct hello h1;
    int a;
    printf("%d",sizeof(a));
    printf("\n");
    FILE *p01=fopen("gome02.txt","wb");
    if(p01==NULL)
    {
        puts("can't open file");
        exit(1);
    }

    person p1, p2;
    printf("%d", sizeof(p2));
    printf("\n");
    p1.a=90;
    //p1.b=49;
    p1.d=94.4;
    fwrite(&p1,sizeof(p1),1,p01);
    fclose(p01);

    FILE *p02=fopen("gome02.txt","rb");
    if(p02==NULL)
    {
        puts("can't open file");
        exit(1);
    }
    fread(&p2,16,1,p02);
    printf("%d %lf",p2.a, p2.d);
   // printf("%d %d %d",h1.x, h1.y, h1.z);
    fclose(p02);
    return 0;
    
}