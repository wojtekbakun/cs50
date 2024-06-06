#include <stdio.h>

int main(void){
    int n = 50;
    int *p = &n;
    printf("n: %i\n", n);
    printf("n: %p\n", p);
    printf("n: %i\n", *p);
}
