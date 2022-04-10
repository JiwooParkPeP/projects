// File: Shape/MysteryShape.hpp
// Ji Woo Park
// JANUARY 18TH 2022
// Assignment 1
#include "AShape.hpp"

class MysteryShape : public AShape {
private:
    double _side;
public:
    explicit MysteryShape(double side = 0.0);
// Pre: base >= 0.0 and height >= 0.0.
// Post: This rectangle is initialized with base base and height height.


    double area() override;
    double perimeter() override;
    void scale(double factor) override;
    void display() override;
    void promptAndSetDimensions() override;
};

