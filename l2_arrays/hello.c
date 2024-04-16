#include <stdio.h>

int main(void) {

  // initialize variables
  char name[20] = "Wojtek";
  char city[20];

  // get the city from terminal
  printf("Hi, %s, where do you live?\n", name);
  scanf("%s", city);

  // print response with string
  printf("Really? I've never heard about %s, %s.\n", city, name);

  return 0;
}
