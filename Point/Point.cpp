//
//  Point.cpp
//  
//
//  Created by Yamil Asusta on 9/14/12.
//
//

#include "Point.h"
#include <cmath>
#include <ostream>

using namespace std;

//Empty Constructors
Point::Point() {
    x = 0;
    y = 0;
}

//Constructor 
Point::Point(const int& x, const int& y) {
    this->x = x;
    this->y = y;
}

//Calculate euclidian distance of 1 dimension
float Point::distance() const {
    return abs(x-y);
}

//Calculate euclidian distance of 2 dimensions
float Point::distance(const Point& p) const {
    return sqrt(pow(p.x - x,2) + pow(p.y - y,2));
}

//Set the value of the Point
void Point::setPoint(const int& x, const int& y) {
    this->x = x;
    this->y = y;
}

//Get the value of X
int Point::getX() const {
    return x;
}

//Get the value of Y
int Point::getY() const {
    return y;
}

//Display the point nicely
ostream& operator<<(ostream& os, const Point&a) {
    os << "(" << a.getX() << ", " << a.getY() << ")";
    return os;
}
