#include <stdio.h>
#include "fread_fwrite.h"

void readStructFread()
{
   /**
    * @param _Mode [rb] Stands for read binary.
    *
    *
    */
   FILE *file = fopen("person_data.dat", "rb");

   if (file != NULL)
   {
      struct Person person;

      /**
       * @brief Read a struct from the file.
       *
       */
      fread(&person, sizeof(struct Person), 1, file);

      fclose(file);

      printf("Name: %s\n", person.name);
      printf("Age: %d\n", person.age);
      printf("Height: %.2f\n", person.height);
   }
   else
      printf("Error opening the file for reading.\n");
}

void writeStructFwrite()
{
   struct Person person1 = {"John Doe", 25, 175.5};

   /**
    * @param _Mode [wb] Stands for write binary.
    *
    *
    */
   FILE *file = fopen("person_data.dat", "wb");

   if (file != NULL)
   {
      /**
       * @brief Write the struct to the file.
       *
       */
      fwrite(&person1, sizeof(struct Person), 1, file);

      fclose(file);
   }
   else
      printf("Error opening the file for writing.\n");
}
