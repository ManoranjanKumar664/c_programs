#include<stdio.h>
//#include<string.h>

int main()
{
    FILE *points_structure;
    int contain_value=49;
    
    points_structure=fopen("file04.txt","w");
    if(points_structure==NULL)
    {
        printf("file didn't opened \n");
    }

    fprintf(points_structure,"%d",contain_value);
    fclose(points_structure);
    puts("done");
    return 0;
}