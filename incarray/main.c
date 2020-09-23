#include "main.h"
#include "increment_numbers_array.h"

int main() {

    const int INITIAL_SIZE = 3;
    int input[3] = {1, 2, 3};
    int current_index = INITIAL_SIZE - 1;

    //Arrays are ALWAYS passed by reference in C
    increment_array(input, INITIAL_SIZE);

    while(current_index >= 0) {
        printf("%d\n", input[current_index]);
        current_index--;
    }
    return 0;
}
