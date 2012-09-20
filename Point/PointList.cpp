//
//  PointList.cpp
//  
//
//  Created by Yamil Asusta on 9/14/12.
//
//

#include "PointList.h"
#include "Point.h"
#include <ostream>

using namespace std;

//Constructor
PointList::PointList() {
    mySize = 0;
}

//Insert new Point in given position of the list.
//Return if completed
bool PointList::insert(const ElementType& element, const int& pos) {
    
    //Check if insertion is possible.
    if(mySize >= CAPACITY || mySize < 0 || pos > mySize)
        return false;
    
    //Shift everything
    for (int i = mySize; i > pos; i--) 
        myArray[i] = myArray[i-1];
    
    //Insert new element
    myArray[pos] = element;
    mySize++;
    return true;
}

//Insert new element at the end of the list.
bool PointList::append(const ElementType& element) {
    
    //Check if insertion is possible.
    if (mySize >= CAPACITY)
        return false;
    
    //Insert new element.
    myArray[mySize] = element;
    mySize++;
    return true;
}

//Find the smallest distance and add it after it
bool PointList::insertNear(const ElementType& element) {
    
    //Check if possible
    if (mySize >= CAPACITY || mySize <= 0)
        return false;
    
    float minDistance = element.distance(myArray[0]);
    int pos = 0;
    //Find the smallest distance
    for (int i = 1; i < mySize; i++) {
        if(minDistance > element.distance(myArray[i])) {
            minDistance = element.distance(myArray[i]);
            pos = i;
        }        
    }
    return insert(element, pos+1);
    
}

//Delete the specific position
bool PointList::remove(const int& pos) {
    
    //Check if it is possible
    if (mySize <= 0 || pos >= mySize || pos < 0)
        return false;
    
    //Shift everything
    for (int i = pos; i < mySize; i++) 
        myArray[i] = myArray[i + 1];
    
    mySize--;
    return true;
}

//Look for an similar distance and remove the closest one 
bool PointList::remove(const ElementType& element) {
    
    //Check if possible
    if (mySize <= 0)
        return false;
    
    float minDistance = element.distance(myArray[0]);
    int pos = 0;
    //Find the smallest distance
    for (int i = 1; i < mySize; i++) {
        if(minDistance > element.distance(myArray[i])) {
            minDistance = element.distance(myArray[i]);
            pos = i;
        }
    }
    
    return remove(pos);

}

//Reset the list
void PointList::clear() {
    mySize = 0;
}

//Determine if the list is empty
bool PointList::empty() const {
    return (mySize == 0) ? true:false;
}

//Return size of current list
int PointList::size() const {
    return mySize;
}

//Return element at given position
ElementType PointList::getElement(const int& pos) const {
    return myArray[pos];
}

//Print the whole list
ostream& operator<<(ostream& os, const PointList& list) {
    for (int i = 0; i < list.size(); i++)
        os << list.getElement(i) << " ";
    os <<endl;
    return os;
    
}
