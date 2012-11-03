//
//  Rectangle.h
//
//
//  Created by Yamil Asusta on 9/26/12.
//	Created for new homework
//

#include <iostream>

using namespace std;

#ifndef RECT_H
#define RECT_H

//Declaration of class rectangle.
class Rectangle {
private:
    //Instance variables
    unsigned int x;
    unsigned int y;
    unsigned int width;
    unsigned int height;
public:
    // Constructors
    Rectangle(int myX, int myY, int myWidth, int myHeight);
    
    // Accessors
    unsigned int area() const; //Get area ocupied by the object
    unsigned int intersection(const Rectangle& R) const; //Get the area of two intersecting rectangles. 0 if no intersection. (Pass by value)
    unsigned int intersection(const Rectangle* R) const; //Get the area of two intersecting rectangles. 0 if no intersection. (Pass by reference)

    
    //Methods for pretty printing
    friend ostream& operator<<(ostream& os, const Rectangle& R);
    friend ostream& operator<<(ostream& os, Rectangle* R);
    
};

#endif

