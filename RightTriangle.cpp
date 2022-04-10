// File: Shape/RightTriangle.cpp
// Ji Woo Park
// JANUARY 18TH 2022
// Assignment 1
#include <cmath> // sqrt.


#include "RightTriangle.hpp"
#include "Utilities.hpp"

RightTriangle::RightTriangle(double base, double height) {
    if (base < 0.0 || height < 0.0) {
        cerr << "RightTriangle precondition violated: base and height cannot be negative." << endl;
        throw -1;
    }
    _base = base;
    _height = height;
}

double RightTriangle::area() {
    return (_base * _height) / 2;
}

double RightTriangle::perimeter() {
    return _base + _height + sqrt(pow(_base, 2) + pow(_height, 2));
}

void RightTriangle::scale(double factor) {
    _base = _base * factor;
    _height = _height * factor;
}

void RightTriangle::display() {
    cout << "RightTriangle" << endl;
    cout << "Base: " << _base << endl;
    cout << "Height: " << _height << endl;
}

void RightTriangle::promptAndSetDimensions() {
    _base = promptDoubleGE("Base?", 0.0);
    _height = promptDoubleGE("Height?", 0.0);
}

