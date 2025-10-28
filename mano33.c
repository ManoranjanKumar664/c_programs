#include<stdio.h>

int main()
{
    int a=40, b;
    FILE *mano=fopen("d01.txt","wb");
    fwrite(&a,sizeof(a),1,mano);
    fclose(mano);
    FILE *mano2=fopen("d01.txt","rb");
    fread(&b,sizeof(b),1,mano2);
    fclose(mano2);
    printf("%d",b);
    return 0;
}