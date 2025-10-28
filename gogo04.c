#include<stdio.h>

struct mano
{
    int a;
    int b;
};

int main()
{
    struct mano m1;
    FILE *p=fopen("mob03.txt","rb");
    puts("id and rollno:");
    while(fread(&m1, sizeof(m1), 1, p))
        printf("%d %d \n", m1.a, m1.b);
    return 0;
}