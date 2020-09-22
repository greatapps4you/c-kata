#include "main.h"
#include "increment_numbers_array.h"

int main() {

    const int INITIAL_SIZE = 3;
    int array[INITIAL_SIZE] = {1,2,3};

    increment_array(array, INITIAL_SIZE);
    return 0;
}
