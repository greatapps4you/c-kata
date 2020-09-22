//
// Created by José E. de Souza N. on 22.09.20.
//

#include "increment_numbers_array.h"

void increment_array(int array[], int initial_size) {
    int current_index = initial_size - 1;

    while(current_index >= 0) {
        printf("%d\n", array[current_index]);
        current_index--;
    }
}