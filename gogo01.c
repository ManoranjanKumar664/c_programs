#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct mano
{
    int a;
    int b;
};

int main()
{
    int a;
    puts("enter any integer");
    scanf("%d",&a);
    //struct mano m1;
    //puts("enter val1 and val2");
    //scanf("%d%d",&m1.a, &m1.b);
    FILE *p=fopen("mob01.txt","ab");
    if(p==NULL)
    {
        puts("file didn't open");
        exit(1);
    }
    fwrite(&a, sizeof(a), 1, p);
   // fwrite(&m1, sizeof(m1), 1, p);
    fclose(p); 
   // getch();
    return 0;
}