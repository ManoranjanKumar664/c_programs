#include<stdio.h>
#include<stdlib.h>

struct node
{
    int x;
    float f;
};

int main()
{
    /*
    char ch[100];
    FILE *mano=fopen("gofile01.txt","w");
    fputs("hello world what is going on",mano);
    fclose(mano);

    FILE *mano2=fopen("gofile01.txt","r");
    while(fgets(ch,8,mano2)!=NULL)
    {
        printf("%s",ch);
    } 
    fclose(mano2);
    */
   struct node n1, n2;
   n1.x=49;
   n1.f=59.9;
   FILE *p=fopen("gome01.txt","wb");
   if(p==NULL)
   {
    puts("file didn't open");
    exit(1);
   }
   fwrite(&n1,sizeof(n1),1,p);
   fclose(p);

   FILE *ptr=fopen("gome01.txt","rb");
   if(ptr==NULL)
   {
    puts("file didn't open");
   }
   fread(&n2,sizeof(n2),1,ptr);
   fclose(ptr);
   printf("%d %f", n2.x, n2.f);
    return 0;
}