#ifndef VECTOR_H_
#define VECTOR_H_

class Vector {
    private:
        int* tuple;
    public: 
        Vector();
        Vector(int x, int y, int z);
        ~Vector();
        void printTuple();
        void AddVectorToVector(const Vector& v);
        void SubtractVectorFromVector(const Vector& v);
};

#endif
