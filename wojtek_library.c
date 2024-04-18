#include <stdio.h>

// char message[20] - Table is a pointer to first element in the table
// int* value - Declare a pointer to an integer to store the height value
int get_int(char *message)
{
    int value;
    printf("%s", message);
    // Read an integer from the console and store it in the memory location pointed to by height.
    scanf("%d", &value); // Pass an integer to the value's address.

    return value;
}

char* get_string(char *message)
{
    char* string;
    printf("%s", message);
    // Read an integer from the console and store it in the memory location pointed to by height.
    scanf("%s", string); // Pass an integer to the value's address.

    return string;
}
