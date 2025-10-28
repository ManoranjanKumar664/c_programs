#include<stdio.h>
void show();

int a=40;
int main()
{
 int a=14;
 printf("%d \n",a);
 show();
 if(1)
 {
    //int a=59;
    printf("%d \n",a);
 }

 return 0;
}

void show()
{
    printf("%d \n",a);
}