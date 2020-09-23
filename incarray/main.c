#include "main.h"
#include "increment_numbers_array.h"

int main() {

    const int INITIAL_SIZE = 3;
    int array[3] = {1,2,3};

    increment_array(array, INITIAL_SIZE);
    return 0;
}
