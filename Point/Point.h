//
//  Point.h
//  
//
//  Created by Yamil Asusta on 9/14/12.
//
//

#ifndef ____Point__
#define ____Point__

#include <iostream>
#include <ostream>

using namespace std;

class Point {
private:
    //Instance variables
    float x;
    float y;
    
public:
    //Constructors
   	Point();
    Point(const int& x, const int& y);
    
    //Accessor Methods
    float distance() const; //Calculate euclidian distance 1-D
    float distance(const Point& p) const; //Calculate euclidian distance 2-D
    
    //Getters and Setters
    void setPoint(const int& x, const int& y); //Initialize Point
    int getX() const; //Return X
    int getY() const; //Return Y
    
    //Overloads
    friend ostream& operator<<(ostream& os, const Point&a);
};


#endif /* defined(____Point__) */
