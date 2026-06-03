#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(int l, char c) : Shape(c) {
    length = l;
}

Square::~Square() {
    cout << "Deleted Square\n";
}

void Square::draw() {
    char color = get_color();

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            cout << color;
        }
        cout << endl;
    }
    cout << endl;
}