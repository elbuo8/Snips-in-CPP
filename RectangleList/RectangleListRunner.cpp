//
//  RectangleListRunner.cpp
//  
//
//  Created by Yamil Asusta on 10/8/12.
//
//

#include <iostream>
#include <fstream>
#include <string>
#include "RectangleList.h"
#include "Rectangle.h"

using namespace std;

//This runner will read the contents of a file specified in the Terminal.
//Then it will parse each line in order to create new rectangles to be added to the list.
//After that some fancy things are excecuted in the list (sorting :D) and presented to the user.

int main(int argc, char* argv[]) {
    
    cout<<"Starting to parse data"<<endl;
	RectangleList L;
    ifstream rectangles (argv[1]);
    int a,b,c,d;
    do {
		rectangles >> a >> b >> c >> d;
        if(rectangles.eof()) break; //Escape the double reading of the EOF.
        L.append(new Rectangle(a, b, c, d));
        cout<<"Rectangle Added!"<<endl;
    } while (!rectangles.eof());
    rectangles.close();
    
    //Start the pretty client
    cout<<"\nContents of the rectangle list:\n"<<endl;
    cout<<L<<endl;
    cout<<"\n\n"<<endl;
    cout<<"Now sorting the list in terms of area...\nContents of the sorted list:\n"<<endl;
    
    L.sort();
    cout<<L<<endl;
    cout<<endl;
    cout<<"The total area occupied by the rectangles is: "<<L.area()<<endl;

}
