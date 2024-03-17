//
// Created by vladb on 17/03/2024.
//

#include "cards.h"
#include <stdlib.h>

struct card generateCard(char _suit, char _number) {
    struct card _result;

    _result.suit = _suit;
    _result.number = _number;

    _result.display[0] = _suit;
    _result.display[1] = _number;
    _result.display[2]= '\0';

    return _result;
}

deck generateDeck(const char _suits[], unsigned int _suits_l, const char _numbers[], unsigned int _numbers_l) {
    deck _result = (struct card*) malloc((_suits_l * _numbers_l) * sizeof(struct card));

    for(unsigned int i = 0; i < _suits_l; ++i)
        for(unsigned int j = 0; j < _numbers_l; ++j)
            _result[i * _numbers_l + j - 1] = generateCard(_suits[i], _numbers[j]);

    return _result;
}