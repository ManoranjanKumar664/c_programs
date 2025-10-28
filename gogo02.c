#include<stdio.h>
struct mano
{
    int a;
    int b;
};

int main()
{
    //char name[100];
    int a[5];
    int b;
    int i=0;
    //struct mano m2;
    FILE *p=fopen("mob01.txt","rb");
    while(fread(&b, sizeof(b), 1, p)){
    //while(fread(&m2, sizeof(m2), 1, p))
        a[i]=b;
        //printf("%d \n",b);
       i++;
    }
    
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d \n",a[i]);
    } 
       // printf("%d %d \n",m2.a, m2.b);
    fclose(p);
    return 0;
}