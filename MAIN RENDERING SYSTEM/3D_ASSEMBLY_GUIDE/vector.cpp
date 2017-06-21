#include "vector.h"
#include <iostream>

/*private variables
int tuple[3]; //x,y,z */

Vector::Vector() {                  
    tuple = new int[3];
    tuple[0] = 0;
    tuple[1] = 0;
    tuple[2] = 0;
}

Vector::Vector(int x, int y, int z) {
    tuple = new int[3];
    tuple[0] = x;
    tuple[1] = y;
    tuple[2] = z;
}

Vector::~Vector() {
    delete[] tuple;
}

void Vector::printTuple() {
    std::cout << tuple[0] << std::endl;
    std::cout << tuple[1] << std::endl;
    std::cout << tuple[2] << std::endl;
}

void Vector::AddVectorToVector(const Vector& v) {
    this->tuple[0] += v.tuple[0];
    this->tuple[1] += v.tuple[1];
    this->tuple[2] += v.tuple[2];
}

void Vector::SubtractVectorFromVector(const Vector& v) {
    this->tuple[0] -= v.tuple[0];
    this->tuple[1] -= v.tuple[1];
    this->tuple[2] -= v.tuple[2];
}




