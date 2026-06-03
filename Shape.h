#ifndef SHAPE_H
#define SHAPE_H

class Shape {
private:
    char color;

public:
    Shape(char c);
    virtual ~Shape();

    char get_color() const;
    virtual void draw() = 0;
};

#endif
