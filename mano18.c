#include <stdio.h>

int main()
 {
   FILE *file;
   int num = 39;

   file = fopen("number02.txt", "w");
   if (file == NULL)
    {
      printf("Error opening file.\n");
    }
   else
   {
    fprintf(file, "%d", num);
   }
   fclose(file);
   puts("done");
   return 0;
}
