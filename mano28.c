#include<stdio.h>
#include<stdlib.h>

typedef struct mano
{
    int a;
    int b;
    int c;
}person;

int main()
{
    person p1, p2;
    puts("enter any 3 number");
    scanf("%d %d %d",&p1.a, &p1.b, &p1.c);
    FILE *mano=fopen("file11.txt","wb");
    if(mano==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    fwrite(&p1,sizeof(p1),1,mano);
    fclose(mano);

    FILE *mano2=fopen("file11.txt","rb");
    fread(&p2,sizeof(p2),1,mano);
    int sum=p2.a+p2.b+p2.c;
    printf("%d",sum);
    return 0;
}