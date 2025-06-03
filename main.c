#include <stdio.h>
#include "classify.h"

int main(void) {
    int number = 1;

    printf("Enter a number : ");
    scanf("%d", &number);

    classify_number(number);
    
    return 0;
}