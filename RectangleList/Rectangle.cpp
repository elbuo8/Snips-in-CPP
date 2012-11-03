//
//  Rectangle.cpp
//
//
//  Created by Yamil Asusta on 9/26/12.
//	Created for new homework
//

#include "Rectangle.h"
#include <iostream>
#include <ostream>
#include <algorithm>

using namespace std;

//Constructors
Rectangle::Rectangle(int myX, int myY, int myWidth, int myHeight) {
    x = (unsigned int) myX;
    y = (unsigned int) myY;
    width = (unsigned int) myWidth;
    height = (unsigned int) myHeight;
}

//Get area ocupied by the object
unsigned int Rectangle::area() const {
    return width*height;
}

//Get the area of two intersecting rectangles. 0 if no intersection. (Pass by value)
unsigned int Rectangle::intersection(const Rectangle& R) const {
    //max and min are from STL
    unsigned int lengthX = max((unsigned int)0, min(x + width, R.x + R.width) - max(x, R.x));
    unsigned int lengthY = max((unsigned int)0, min(y + height, R.y + R.height) - max(y, R.y));
    return lengthX*lengthY;
}

//Get the area of two intersecting rectangles. 0 if no intersection. (Pass by reference)
unsigned int Rectangle::intersection(const Rectangle* R) const {
    //max and min are from STL
    unsigned int lengthX = max((unsigned int)0, min(x + width, R->x + R->width) - max(x, R->x));
    unsigned int lengthY = max((unsigned int)0, min(y + height, R->y + R->height) - max(y, R->y));
    return lengthX*lengthY;
}

//Method for pretty printing
ostream& operator<<(ostream& os, const Rectangle& R) {
    os<<"(x:" << R.x<<", y:" << R.y<<", w:" << R.width<<", h:" << R.height<<")";
    return os;
}

//Method for pretty printing
ostream& operator<<(ostream& os, Rectangle* R) {
    os<<"(x:" << R->x<<", y:" << R->y<<", w:" << R->width<<", h:" << R->height<<")";
    return os;
}

