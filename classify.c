#include "classify.h"
#include <stdio.h>
#include <stdlib.h>

kind_t classify_number(int number) {
    
    if( number <= 0) {
        return ERROR;
    }
    int * factors = NULL;
    int taille = 0;
    int sum = 0;

    for(int i = 1; i < number; i++) {
        if(number % i == 0) {
            sum += i;

            int * temp = realloc(factors, (taille + 1) * sizeof(int));
            if(temp == NULL) {
                free(factors);
                printf("Memory allocation failed");
                return ERROR;
            } 
            factors = temp;
            
            factors[taille] = i;
            taille++;
        }
    }

    printf("NUMBER = %d\n", number);
    for(int i = 0; i < taille; i++) {
        printf("-> %d\n", factors[i]);
    }
    printf("Sum = %d\n", sum);

    if(sum == number) {
        printf("%d is a perfect number !\n", number);
        return PERFECT_NUMBER;
    } else if(sum < number) {
        printf("%d is a deficient number !\n", number);
        return DEFICIENT_NUMBER;
    } else {
        printf("%d is a abundant number !\n", number);
        return ABUNDANT_NUMBER;
    }
}
