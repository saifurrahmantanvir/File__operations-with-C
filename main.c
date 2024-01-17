#include <stdio.h>

#include "FgetcFputc/fgetc_fputc.h"
#include "FgetsFputs/fgets_fputs.h"

#include "FreadFwrite/fread_fwrite.h"

/**
 * @brief Start command to build and run this project
 *
 * make run
 *
 *
 */
int main()
{
   readFileFgetc();

   readStringFgets();

   readStructFread();

   return 0;
}