#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sum();
int var01;
    struct mano
    {
        // private:
        int a;
        float b;
        /* void show()
        {
            printf("%d %f", a, b);
        } */
    };

int main()
{
    extern int var01;
    var01=220;
    printf("%d\n", var01);
    struct mano m1, m2;
    m1.a=30;
    m1.b=55.5;
    m2=m1;
    printf("%d %f\n", m1.a, m1.b);
    printf("%d %f\n", m2.a, m2.b);  
    sum();
    char ch[40];
    strcpy(ch,"ram");
    printf("\n%c",*ch);
    return 0;
}

void sum()
{
    extern int var01;
    var01=110;
    printf("%d\n", var01);
    struct mano ms;
    ms.a=49;
    ms.b=110.5;
    printf("%d %f", ms.a, ms.b);
}