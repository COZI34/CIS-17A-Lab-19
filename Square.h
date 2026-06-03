#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
private:
    int length;

public:
    Square(int l, char c);
    virtual ~Square();

    virtual void draw();
};

#endif