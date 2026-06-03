#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape(char c) {
    color = c;
}

Shape::~Shape() {
    cout << "Deleted Shape\n";
}

char Shape::get_color() const {
    return color;
}