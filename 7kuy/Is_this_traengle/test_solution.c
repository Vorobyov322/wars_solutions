#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "solution.c"

int main(int argc, char *argv[])
{
    assert(is_triangle(1, 2, 2) == true);
    assert(is_triangle(3, 3, 3) == true);
    assert(is_triangle(3, 4, 5) == true);
    assert(is_triangle(7, 2, 2) == false);
    assert(is_triangle(2, 2, 4) == false);
    assert(is_triangle(1, 3, 7) == false);
    assert(is_triangle(1, 7, 3) == false);
    assert(is_triangle(3, 1, 7) == false);
    assert(is_triangle(3, 7, 1) == false);
    assert(is_triangle(7, 1, 3) == false);
    assert(is_triangle(7, 3, 1) == false);
    assert(is_triangle(3, 3, 0) == false);
    assert(is_triangle(0, 0, 0) == false);
    assert(is_triangle(-3, -4, -5) == false);
    assert(is_triangle(10, 100, 1000) == false);

    printf("All test passed!\n");

    return 0;
}
