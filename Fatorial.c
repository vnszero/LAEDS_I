#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Fatorial de Numeros Grandes.h"

int main() {
    // Test cases
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);
    // Add more test cases as needed

    printf("All test cases passed!\n");
    return 0;
}