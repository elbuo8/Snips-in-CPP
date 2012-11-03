//
//  RectangleList.h
//  
//
//  Created by Yamil Asusta on 9/26/12.
//	Modified for new homework.
//

#ifndef ____List__
#define ____List__

#include "Rectangle.h"
#include <iostream>
#include <ostream>

using namespace std;

typedef Rectangle ElementType;


//Class that defines a node
class Node {

public:
    //Instance variables
	ElementType* data;
    Node* next;
    
    //Constructor
    Node(ElementType* R, Node* next);
};

//Class that defines a list of rectangles
class RectangleList {
public:
    
    //Constructor
    RectangleList();
    
    //Mutator methods
    bool insert(ElementType* R, const int& pos); //Insert node at specified position
    bool append(ElementType* R); //Add node at the end of the list
    bool push(ElementType* R); //Add node to the beginning of the list
    void sort(); //Sort the list by the specified key
    
    //Accessor methods
    unsigned int getSize() const; //Get length of the list
    unsigned int area() const; //Get the total area ocupied by rectangles
    
    //Overload to print
    friend ostream& operator<<(ostream& os, const RectangleList& L);
    
private:
    
    //Instance variables
    Node* head;
    unsigned int size;

};

#endif /* defined(____List__) */
