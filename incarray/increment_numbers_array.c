//
// Created by José E. de Souza N. on 22.09.20.
//

#include "increment_numbers_array.h"

int *increment_array(int *input, const int initial_size) {
    int current_index = initial_size - 1;
    while(current_index >= 0) {
        input[current_index] = input[current_index] + 1;
        current_index--;
    }
    //Arrays are ALWAYS passed by reference in C
    return input;
}