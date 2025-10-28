#include<stdio.h>

int main()
{
    int a[5], b[5];
    puts("enter any 5 numbers");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    FILE *mano=fopen("f22.txt","ab+");
    fwrite(&a,sizeof(a),1,mano);
    fread(&b,sizeof(b),1,mano);
    /*
    puts("value are:");
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    } */
    int no_of_odd=0, no_of_even=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            no_of_even=no_of_even+1;
        }
        else
        {
            no_of_odd=no_of_odd+1;
        }
    }
    fwrite(&no_of_even,sizeof(no_of_even),1,mano);
    fwrite(&no_of_odd,sizeof(no_of_odd),1,mano);
    fclose(mano);
    return 0;
}