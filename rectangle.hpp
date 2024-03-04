#include <iostream>
#include "shape.hpp"

class Rectangle : public Shape {
    int width;
    int length;

    public:
    Rectangle(int x, int y, int w, int l, int color=250):Shape(x,y,color), width(w), length(l){
        
    }

    float area() const {return width*length;}

};
