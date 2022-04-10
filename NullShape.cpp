// File: Shape/NullShape.cpp
// Ji Woo Park
// JANUARY 18TH 2022
// Assignment 1
#include "NullShape.hpp"

NullShape::NullShape() {
}

double NullShape::area() {
    return 0.0;
}

double NullShape::perimeter() {
    return 0.0;
}

void NullShape::scale(double factor) {
}

void NullShape::display() {
    cout << "NullShape" << endl;
}

void NullShape::promptAndSetDimensions() {
}

