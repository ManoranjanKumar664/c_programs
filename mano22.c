#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *mano=fopen("this02.txt","w");
    fputs("ranjan",mano);
    return 0;
}