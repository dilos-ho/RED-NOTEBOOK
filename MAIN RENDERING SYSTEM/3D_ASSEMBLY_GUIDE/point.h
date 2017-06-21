#ifndef POINT_H_
#define POINT_H_

class Point { 
    private:
        int* tuple;
    public:
        Point();
        Point(int x, int y, int z);
        ~Point();
};

#endif
