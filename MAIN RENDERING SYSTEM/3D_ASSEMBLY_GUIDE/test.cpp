#include <iostream>

int main() {
    int* tuple = new int[3];
    int* tuple2 = new int[3];
    tuple[0] = 2323;
    tuple[1] = 92;
    tuple[2] = -2525;
    tuple2 = tuple;
    std::cout << tuple2[0] << std::endl << tuple2[1] << std::endl << tuple2[2] << std::endl;
    return 0;
}
