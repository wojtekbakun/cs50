#include <stdio.h>
#include "../wojtek_library.h"

void print_column(int columns);

int main(void)
{
   int height = get_int("Give me the number of columns: ");
   print_column(height); //  Dereference the height pointer to get the integer value stored in that memory location and pass it to the print_column function.
}

void print_column(int columns)
{
   // printf("\n");
    for (int i = 0; i < columns; i++)
        {
            printf("#\n");
        }
}
