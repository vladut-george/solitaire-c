//
// Created by vladb on 17/03/2024.
//

#ifndef UTILS_H
#define UTILS_H

struct cycle {
    unsigned int index, p_index;
};

typedef struct cycle* permutation;

permutation generatePermutation(unsigned int length);

#endif //UTILS_H
