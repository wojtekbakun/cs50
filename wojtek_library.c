#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    printf("%s", message);
    char buffer[100]; // Temporary buffer to hold the input
    scanf("%99s", buffer); // Read the input into the buffer

    char *dynamicString = (char *)malloc((strlen(buffer) + 1) * sizeof(char)); // Allocate memory for the string and eol

    if(dynamicString == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    strcpy(dynamicString, buffer); // Copy the buffer content to the dynamically allocated memory
    printf("got the message: %s\n", dynamicString);

    return dynamicString;
}

int string_length(char *my_string)
{
    int n = 0;
    while (my_string[n] != '\0')
    {
        n++;
    }
    return n;
}
