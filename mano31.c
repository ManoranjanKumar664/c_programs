#include<stdio.h>
typedef struct mano
{
    char ch[100];
    int rollno;
    int class;
}student;

int main()
{
    student writing_data, reading_data;
    puts("enter your name");
    gets(writing_data.ch);
    writing_data.rollno=39;
    writing_data.class=10;
    FILE *pointer_to_file=fopen("f22.txt","wb");
    fwrite(&writing_data,sizeof(writing_data),1,pointer_to_file);
    fclose(pointer_to_file);

    FILE *mano=fopen("f22.txt","rb");
    fread(&reading_data,sizeof(reading_data),1, mano);
    fclose(mano);
    printf("%d",reading_data.class);
    return 0;
}