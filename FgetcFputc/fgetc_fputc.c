#include <stdio.h>

void readCharFgetc()
{
   /**
    * @param _Mode [r] Opens an existing file for reading purpose.
    *
    *
    */
   FILE *file = fopen("person_list.txt", "r");

   if (file != NULL)
   {
      /**
       * @brief Read a char from the file. getc() works the same way.
       *
       */
      int c = fgetc(file);

      printf("FIRST Letter: %d %c\n", c, c);
      fclose(file);
   }
   else
      printf("Error opening file for reading!");
}

void writeCharFputc()
{
   /**
    * @param _Mode [a] Opens a file for writing in appending mode. If it does not exist
    * then a new file is created.
    *
    *
    */
   FILE *file = fopen("person_list.txt", "a");

   if (file != NULL)
   {
      /**
       * @brief Write a char to the file. putc() works the same way.
       *
       */
      int c = fputc('T', file);

      printf("WRITTEN Char: %d %c\n", c, c);
      fclose(file);
   }
   else
      printf("Error opening file for writing!");
}

void readFileFgetc()
{
   FILE *file = fopen("person_list.txt", "r");

   if (file != NULL)
   {
      char c;

      printf("Full content___\n");

      /**
       * @brief Read the whole file. getc() works the same way.
       *
       */
      while ((c = fgetc(file)) != EOF)
      {
         printf("%c", c);
      };

      fclose(file);
   }
   else
      printf("Error opening file for reading!");
}

void writeStringFputc()
{
   char buffer[255];

   FILE *file = fopen("person_list.txt", "a");

   if (file != NULL)
   {
      fputc('\n', file);

      printf("Enter string to insert in the file: ");
      scanf(" %[^\n]s", buffer);

      /**
       * @brief Write a string to the file. putc() works the same way.
       *
       */
      for (int i = 0; buffer[i] != '\0'; i++)
      {
         fputc(buffer[i], file);
      }

      fclose(file);
   }
   else
      printf("Error opening file for writing!");
}