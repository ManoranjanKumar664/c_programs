#include<stdio.h>
#include<stdlib.h>

struct person
{
    int id;
    int rollno;
};

int main()
{
    struct person p1;
    puts("enter id and rollno");
    scanf("%d %d", &p1.id, &p1.rollno);
    FILE *p=fopen("mob03.txt","ab");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    fwrite(&p1, sizeof(p1), 1, p);
    fclose(p);
    return 0;
}