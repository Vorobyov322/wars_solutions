#include <stdio.h>
#include <assert.h>

#include "solution.c"

int main(int argc, char *argv[])
{
    assert(square_digits(3212u) == 9414ull);
    assert(square_digits(2112u) == 4114ull);
    assert(square_digits(0u) == 0ull);
    assert(square_digits(999u) == 818181ull);
    assert(square_digits(10001u) == 10001ull);
    assert(square_digits(3210987654u) == 9410816449362516ull);
    assert(square_digits(3999999999u) == 9818181818181818181ull);

    printf("All tests passed\n");
    return 0;
}
