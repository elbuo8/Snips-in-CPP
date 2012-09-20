//
//  PointList.h
//  
//
//  Created by Yamil Asusta on 9/14/12.
//
//

#ifndef ____PointList__
#define ____PointList__

#include <iostream>
#include "Point.h"
#include <ostream>

const int CAPACITY = 1024;
typedef Point ElementType;

class PointList {
private:
    int mySize;
    ElementType myArray[CAPACITY];
    
public:
    
    //Constructor
    PointList();
    
    //Methods
    bool insert(const ElementType& element, const int& pos); //Insert at give position
    
	bool append(const ElementType& element); //Insert at the end of list

	bool insertNear(const ElementType& element); //Insert where the distance is smaller
    
	bool remove(const int& pos); //Remove element at position given

	bool remove(const ElementType& element); //Remove similar point

	void clear(); //Delete the list

	bool empty() const; //Check if the list is empty
    
    int size() const; //Return size of list
    
    ElementType getElement(const int& pos) const;//Return element at the specified position
    
    //Overloads
    friend ostream& operator<<(ostream& os, const PointList& list);
};

#endif /* defined(____PointList__) */
