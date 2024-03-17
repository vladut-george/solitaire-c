#include <stdio.h>
#include "utils.h"

int main(void) {
    permutation _tmp = generatePermutation(52);

    for(unsigned int i = 0; i < 52; i++) {
        printf("%d -> %d \n", _tmp[i].index, _tmp[i].p_index);
    }



    return 0;
}
