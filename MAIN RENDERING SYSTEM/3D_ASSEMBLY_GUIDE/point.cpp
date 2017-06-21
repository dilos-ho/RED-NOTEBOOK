#include "point.h"
#include "vector.h"

/*private variables
int tuple[3]; //x,y,z */

Point::Point() {
    int* tuple = new int[3];
    tuple[0] = 0;
    tuple[1] = 0;
    tuple[2] = 0;
}

Point::Point(int x, int y, int z) {
    int* tuple = new int[3];
    tuple[0] = x;
    tuple[1] = y;
    tuple[2] = z;
}

Point::~Point() {
    delete[] tuple;
}

