#include <stdio.h>
#include <stdatomic.h>

int main() {
    int number1 = 5;
    volatile int number2 = 8;
    _Atomic int atomic_number3 = 12;

    int *restrict ptr1;
    volatile int *restrict ptr2;
    _Atomic int *restrict ptr3;

    ptr1 = &number1;
    ptr2 = &number2;
    ptr3 = &atomic_number3;

    printf("number1 = %d, number2 = %d, atomic_number3 = %d\n", number1, number2, atomic_number3);

    *ptr1 += 2;
    *ptr2 += 2;
    (*ptr3) += 5;
    
    printf("number1 = %d, number2 = %d, atomic_number3 = %d\n", number1, number2, atomic_number3);

    return 0;
}

