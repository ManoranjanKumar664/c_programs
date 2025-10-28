#include<stdio.h>
//#include<string.h>

int main()
{
   FILE *file;
   int num = 123;

   file = fopen("numbers.txt", "w");
   if (file == NULL) {
      printf("Error opening file.\n");
      return 1;
   }

   fprintf(file, "%d", num);

   fclose(file);
    return 0;
}