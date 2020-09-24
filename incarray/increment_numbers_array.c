//
// Created by José E. de Souza N. on 22.09.20.
//

#include "increment_numbers_array.h"

int *increment_array(int *input) {
    int current_index = LAST_DIGIT;
    while(current_index >=  0 ) {
        input[current_index] = input[current_index] + 1;
        current_index--;
        if(input[current_index] == 0) {
            break;
        }
    }
    //Arrays are ALWAYS passed by reference in C
    return input;
}