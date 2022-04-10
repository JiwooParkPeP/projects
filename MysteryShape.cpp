// File: Shape/MysteryShape.cpp
// Exercise for the student.
// Ji Woo Park
// JANUARY 18TH 2022
// Assignment 1
#include <cmath> // sqrt.
#include "MysteryShape.hpp"
#include "Utilities.hpp" // PI.


MysteryShape::MysteryShape(double side) {
    if(side < 0.0) {
        cerr << "MysteryShape precondition violated: side cannot be negative." << endl;
        throw -1;
    }
    _side = side;
}

double MysteryShape::area() {
    return 2.0 * (1.0 + sqrt(2.0)) * pow(_side, 2.0);
}

double MysteryShape::perimeter() {
    return 8.0 * _side;
}

void MysteryShape::scale(double factor) {
    _side = _side * factor;
}

void MysteryShape::display() {
    cout << "MysteryShape\n" << "Side: " << _side << endl;
}

void MysteryShape::promptAndSetDimensions() {
    _side = promptDoubleGE("Side?", 0.0);
}
