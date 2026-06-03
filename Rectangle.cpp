#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int l, int w, char c) : Shape(c) {
    length = l;
    width = w;
}

Rectangle::~Rectangle() {
    cout << "Deleted Rectangle\n";
}

void Rectangle::draw() {
    char color = get_color();

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < length; j++) {
            cout << color;
        }
        cout << endl;
    }
    cout << endl;
}