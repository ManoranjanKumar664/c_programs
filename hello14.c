#include<stdio.h>
#include<stdlib.h>

struct person
{
    char name[10];
    int rollno;
    int class;
};

void show();
void show2(struct person x);

int main()
{
    struct person mano;
    show2(mano);
    const int a=40;
    printf("%d",a);
    printf("\n maonrajan \n");
    show();
    return 0;
}

void show2(struct person a)
{
    a->name="ram_sita";
    a->rollno=49;
}

void show()
{
    int *p;
    p=(int*)malloc(sizeof(20));
    *p=59;
    printf("%d",*p);
    printf("\n");
    int *s=(int*)malloc(sizeof(2));
    *s=120;
    double *newp=(double*)realloc(s,8);
    printf("%d",*newp);
    /*
    printf("\n enter any no");
    scanf("%d",s);
    printf("%d",*s);*/
}