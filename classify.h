#ifndef __TEST_H__
#define __TEST_H__

typedef enum Kind {
    PERFECT_NUMBER = 1,
    ABUNDANT_NUMBER = 2,
    DEFICIENT_NUMBER = 3,
    ERROR = -1
} kind_t;

kind_t classify_number(int number);

#endif