#include <stdio.h>
#include "cards.h"
#include "utils.h"

const char suits[] = {'c'/*clubs*/, 'd'/*diamonds*/, 'h'/*hearts*/, 's'/*spades*/};
const unsigned int suits_l = 4;

const char numbers[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K'};
const unsigned int numbers_l = 13;


int main(void) {
    /*permutation _tmp = generatePermutation(52);

    for(unsigned int i = 0; i < 52; i++) {
        printf("%d -> %d \n", _tmp[i].index, _tmp[i].p_index);
    }*/


    deck _tmp = generateDeck(suits, suits_l, numbers, numbers_l);

    for (unsigned int i = 0; i < 52; i++)
        printf("%s ", _tmp[i].display);

    return 0;
}
