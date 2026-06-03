#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w, char c);
    virtual ~Rectangle();

    virtual void draw();
};

#endif