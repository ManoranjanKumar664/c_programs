#include<stdio.h>
#include<stdlib.h>
struct file
{
    int class;
    int rollno;
};

int main()
{
    struct file m;
    printf("%p \n", &m);
    printf("%p \n", &m.class);
    printf("%d \n", &m.rollno);

    struct file f1, f2;
    puts("enter class");
    scanf("%d",&f1.class);
    puts("enter rollno");
    scanf("%d",&f1.rollno);
    FILE *mano=fopen("gof01.txt","wb");
    if(mano==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    fwrite(&f1,sizeof(f1),1,mano);
    fclose(mano);

    FILE *mano2=fopen("gof01.txt","rb");
    if(mano2==NULL)
    {
        puts("file din't open");
        exit(1);
    }
    fread(&f2,sizeof(f2),1,mano2);
    fclose(mano2);
    printf("%d %d",f2.class, f2.rollno);
    return 0;
}