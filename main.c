#include <stdio.h>
#include "cards.h"
#include "utils.h"

int main(void) {
    /*permutation _tmp = generatePermutation(52);

    for(unsigned int i = 0; i < 52; i++) {
        printf("%d -> %d \n", _tmp[i].index, _tmp[i].p_index);
    }*/

    deck _tmp = generateDeck(suits, suits_l, numbers, numbers_l);

    for(unsigned int i = 0; i < 52; i++)
        printf("%s ", _tmp[i].display);

    return 0;
}
