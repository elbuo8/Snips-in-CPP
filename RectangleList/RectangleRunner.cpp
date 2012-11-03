//
//  RectangleRunner.cpp
//  Simple test case for the rectangle class
//
//  Created by Yamil Asusta on 10/8/12.
//
//


#include "Rectangle.h"
#include <iostream>

using namespace std;

//Rectangle class tester
int main(int argc, char* argv[]) {
	Rectangle R1(5,5,10,10);
    Rectangle R2(10,10,10,15);
    Rectangle R3(0,20,5,10);
    
    cout<<R1.intersection(R2)<<endl;
    
    cout<<R1.intersection(R3)<<endl;
    
    cout<<R1<<endl;
    
    cout<<R1.area()<<endl;
}