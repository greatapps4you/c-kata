#include "main.h"
#include "increment_numbers_array.h"

void zero_init_input(int *input);

int main() {
    int input[MAX_NUMBER_LENGTH];
    zero_init_input(input);

    int current_index = LAST_DIGIT;
    input[LAST_DIGIT] = 3;
    input[LAST_DIGIT - 1] = 2;
    input[LAST_DIGIT - 2] = 1;

    //Arrays are ALWAYS passed by reference in C
    increment_array(input);

    while(current_index >= 0) {
        printf("%d\n", input[current_index]);
        current_index--;
    }
    return 0;
}

void zero_init_input(int *input) {
    int i = 0;
    for(i = LAST_DIGIT; i >= 0; i--){
        input[i] = 0;
    }
}
