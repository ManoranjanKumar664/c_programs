#include<stdio.h>
#include<stdlib.h>

typedef struct x
{
    int class;
    int rollno;
    int batchno;
}student;

int main()
{
    /*
    student s1, s2;
    puts("enter class, rollno and batchno");
    scanf("%d%d%d",&s1.class, &s1.rollno, &s1.batchno);
    printf("values are:%d\n%d\n%d",s1.class, s1.rollno, s1.batchno); */

    /*
    char ch[100], rh[100];
    puts("etner any string");
    gets(ch);
    FILE *mano=fopen("s01.cpp","wb");
    if(mano==NULL)
    {
        puts("file didn't opened");
        exit(1);
    }
    fwrite(&ch,sizeof(ch),1,mano);
    fclose(mano);
    puts("written on the file done");

    FILE *mano2=fopen("s01.cpp","rb");
    if(mano2==NULL)
    {
        puts("file didn't opened");
        exit(1);
    }
    fread(&rh,sizeof(rh),1,mano2);
    fclose(mano2);
    printf("%s",rh); */

    return 0;
}