//here is problem with get_string function (probably memory allocation)

#include <stdio.h>
#include "../wojtek_library.h"
#include <string.h>

typedef struct {
    int year;
    int month;
} date;

int main(void)
{
    date dates[3];

    dates[0].year = 2020;
    dates[0].month = 12;

    char *strings[] = {"wierzbno", "ochota", "centrum", "srodmiescie", "wlochy", "zalom"};
    char *string = get_string("String: ");
    printf("Scanned string: %s\n", string);


    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], string) == 0)
        {
            printf("Found!\n");
            return 0;
        }
    }

    printf("Not found!\n");
    return 1;
}
