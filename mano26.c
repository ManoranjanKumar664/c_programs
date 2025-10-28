#include<stdio.h>
#include<stdlib.h>

typedef struct person
{
    int class;
    int rollno;
}student;

int main()
{
    student s1;
    s1.class=10;
    s1.rollno=59;
    
    int x;
    FILE *point_file=fopen("file011.txt","wb");
    if(point_file==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    fwrite(&s1,sizeof(s1),1,point_file);
    fclose(point_file);
    student s2;
    FILE *open_file=fopen("file011.txt","rb");
    fread(&s2,sizeof(s2),1,open_file);
    printf("%d %d",s2.class,s2.rollno);
    fclose(open_file);
    return 0;
}