// David Duong
#include <iostream>
#include <vector>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;

int main() {
	// create a vector of shape pointers
    vector<Shape*> shapes;
    int choice = 0;

    
    while (choice != 4) {
		// print menu until user decides to exit
        cout << "1) Create Square\n";
        cout << "2) Create Rectangle\n";
        cout << "3) Print all shapes in Vector\n";
        cout << "4) Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            int length;
            char color;
			// prompts user for color and length of square
            cout << "Enter color letter: ";
            cin >> color;

            cout << "Enter length: ";
            cin >> length;
			// creates a new square and adds it to the vector
            Shape* tmp = new Square(length, color);
            shapes.push_back(tmp);
        }
        else if (choice == 2) {
            int length;
            int width;
            char color;
			// prompts user for color, length, and width of rectangle
            cout << "Enter color letter: ";
            cin >> color;

            cout << "Enter length: ";
            cin >> length;

            cout << "Enter width: ";
            cin >> width;
			// creates a new rectangle and adds it to the vector
            Shape* tmp = new Rectangle(length, width, color);
            shapes.push_back(tmp);
        }
        else if (choice == 3) {
			// prints all shapes in the vector
            for (int i = 0; i < shapes.size(); i++) {
                shapes[i]->draw();
            }
        }
    }
	// deletes all shapes in the vector
    for (int i = 0; i < shapes.size(); i++) {
        delete shapes[i];
    }

    system("pause");
    return 0;
}
