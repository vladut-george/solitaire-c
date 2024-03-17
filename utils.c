//
// Created by vladb on 17/03/2024.
//

#include "utils.h"

#include <stdlib.h>
#include <time.h>

permutation generatePermutation(unsigned int length) {
    permutation _result = (struct cycle*) malloc(length * sizeof(struct cycle));

    for(unsigned int i = 0; i < length; ++i) {
        _result[i].index = i;
        _result[i].p_index = i;
    }

    srand(time(NULL));
    for(unsigned int i = 0; i < length; ++i) {
        unsigned int _i = rand() % 52;
        unsigned int _p_index = _result[_i].p_index;
        _result[_i].p_index = _result[i].p_index;
        _result[i].p_index = _p_index;
    }

    return _result;
}
