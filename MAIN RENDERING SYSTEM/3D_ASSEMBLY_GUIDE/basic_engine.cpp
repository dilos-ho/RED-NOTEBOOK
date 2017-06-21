#include <iostream>
#include "vector.h"
#include "point.h"

using std::cout;
using std::endl;

int main() {
    Vector* v1 = new Vector(0,1,2);
    Vector* v3 = new Vector(-1,-1,-2);
    v3->AddVectorToVector(*v1);
    v3->SubtractVectorFromVector(*v1);
    v3->printTuple();
    delete v1;
    delete v3;
    return 0;
}
