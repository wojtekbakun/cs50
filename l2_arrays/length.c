#include <stdio.h>
#include "../wojtek_library.h"
#include <string.h>

int main(void)
{
    char *name = get_string("Enter your name: ");
    int length = strlen(name);
    printf("%i \n", length);
}
