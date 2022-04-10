// File: Shape/Circle.cpp
// Ji Woo Park
// JANUARY 18TH 2022
// Assignment 1
#include "Circle.hpp"
#include "Utilities.hpp" // PI.

Circle::Circle(double radius) {
    if(radius < 0.0) {
        cerr << "Circle precondition violated: radius cannot be negative." << endl;
        throw -1;
    }
    _radius = radius;
}

double Circle::area() {
    return PI * _radius * _radius;
}

double Circle::perimeter() {
    return 2.0 * PI * _radius;
}

void Circle::scale(double factor) {
    _radius = _radius * factor;
}

void Circle::display() {
    cout << "Circle\n" << "Radius: " << _radius << endl;
}

void Circle::promptAndSetDimensions() {
    _radius = promptDoubleGE("Radius?", 0.0);
}


