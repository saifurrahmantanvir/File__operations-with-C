#include <stdio.h>

#define MAX_SIZE 255

void readStringFgets()
{
   char buffer[MAX_SIZE];

   FILE *file = fopen("person_list.txt", "r");

   if (file == NULL)
   {
      perror("Error opening the file for reading!");
      return;
   }

   /**
    * @brief Read the first line from the file.
    *
    * fgets(buffer, MAX_SIZE, file) reads a line(at most MAX_SIZE - 1 characters or until a
    * newline character ('\n') is encountered) from the file.
    *
    * It also appends a null character ('\0') to the end of the string.
    *
    *
    */
   /* if (fgets(buffer, MAX_SIZE, file) != NULL)
   {
      printf("First Line: %s", buffer);
   }
   else
      printf("Error reading from file.\n"); */

   printf("Full content___\n");

   /**
    * @brief Read the whole file line by line.
    *
    * while (fgets(buffer, MAX_SIZE, file) != NULL) continues to execute as long as fgets
    * successfully reads a line from the file
    * (i.e., it doesn't encounter the end of the file or an error)
    *
    *
    */
   while (fgets(buffer, MAX_SIZE, file) != NULL)
   {
      printf("%s", buffer);
   }

   fclose(file);
}

void writeStringFputs()
{
   char buffer[MAX_SIZE];

   FILE *file = fopen("person_list.txt", "a");

   if (file == NULL)
   {
      perror("Error opening the file for writing!");
      return;
   }

   fputc('\n', file);

   printf("\nEnter string to insert in the file: ");
   scanf(" %[^\n]s", buffer);

   /**
    * @brief Write a line to the file.
    *
    * fputs(buffer, file) writes the null-terminated string stored in buffer to the file.
    *
    * It returns EOF (End of File) if an error occurs during the write operation.
    * Otherwise, it returns a non-negative value.
    *
    *
    */
   if (fputs(buffer, file) != EOF)
   {
      printf("Write to file complete.\n");
   }
   else
      printf("Error writing to file.\n");

   fclose(file);
}