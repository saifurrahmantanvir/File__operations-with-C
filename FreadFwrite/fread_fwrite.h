#ifndef FREAD_FWRITE_H
#define FREAD_FWRITE_H

struct Person
{
   char name[50];
   int age;
   float height;
};

void readStructFread();
void writeStructFwrite();

#endif // FREAD_FWRITE_H