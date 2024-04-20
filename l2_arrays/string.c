#include <stdio.h>
#include <string.h>
#include "../wojtek_library.h"

int main(void)
{
    char *string = get_string("Input: ");
    printf("Output: ");

    for (int i = 0, length = strlen(string); i < length; i++)
        {
            printf("%c ", string[i]);
        }

    printf("\n");
}
