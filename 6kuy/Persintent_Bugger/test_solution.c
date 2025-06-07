#include <stdio.h>
#include <assert.h>

#include "solution.c"

int main(int argc, char *argv[]){
    assert(persistence(39) == 3);
    assert(persistence(4) == 0);
    assert(persistence(25) == 2);
    assert(persistence(999) == 4);
    printf("All test passed\n");
    return 0;
}
