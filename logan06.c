#include<stdio.h>
struct mano
{
    int a;
    int b;
    int c;
};

int main()
{
    struct mano m1;
    //int b;
    FILE *p=fopen("kam01.txt","rb");
    while(fread(&m1, sizeof(m1), 1, p)>0)
    {
    printf("value is %d %d and %d \n", m1.a, m1.b, m1.c);
    }
    fclose(p);
    return 0;
}