//
// Created by vladb on 17/03/2024.
//

#ifndef CARDS_H
#define CARDS_H

#include "utils.h"

struct card {
    char suit;
    char number;
    char display[3];
};

typedef struct card* deck;




struct card generateCard(char _suit, char _number);

deck generateDeck(const char _suits[], unsigned int _suits_l, const char _numbers[], unsigned int _numbers_l);

//_shuffle should be generate with generatePermutation of the length of the deck;
deck shuffleDeck(deck _to_shuffle, permutation _shuffle);

#endif //CARDS_H
