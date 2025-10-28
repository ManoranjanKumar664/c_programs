#include<stdio.h>

int main()
{
    int c=40, d;
    FILE *mano=fopen("f21.txt","ab");
    fwrite(&c,sizeof(c),1,mano);
    fclose(mano);

    FILE *mano2=fopen("f21.txt","rb");
    fread(&d,sizeof(d),1,mano2);
    fclose(mano2);
    printf("the value at d is %d",d);
    return 0;
}