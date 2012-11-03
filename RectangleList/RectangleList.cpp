//
//  RectangleList.cpp
//  
//
//  Created by Yamil Asusta on 9/26/12.
//	Modified for new homework
//

#include "RectangleList.h"
#include "Rectangle.h"
#include <iostream>
#include <ostream>

typedef Rectangle ElementType;

using namespace std;

//Initialize Node object
Node::Node(ElementType* val, Node* next) {
    data = val;
    this->next = next;
}

//Initialize List object
RectangleList::RectangleList() {
    head = NULL;
    size = 0;
}

//Overload to print
ostream& operator<<(ostream& os, const RectangleList& L) {
    Node* nodeActual = L.head;
    if (L.head == NULL) return os;
    for (int i = 0; i < L.size; i++) {
        os<<nodeActual->data << " ";
        nodeActual = nodeActual->next;
    }

    return os;
}

//Insert node at specified position
bool RectangleList::insert(ElementType* val, const int& pos) {
    if(pos == 0) return push(val);

    Node* nodeActual = head;
    int counter = 1;
    while(counter != pos && nodeActual->next != NULL) {
        counter++;
        nodeActual = nodeActual->next;
    }
    if(counter != pos) return false;
    nodeActual->next = new Node(val, nodeActual->next);
    size++;
    return true;
}

//Add node at the end of the list
bool RectangleList::append(ElementType* R) {
    return insert(R,size); //Save lines of code :D
}

//Add node to the beginning of the list
bool RectangleList::push(ElementType* val) {
    if (head == NULL) {
    	head = new Node(val, NULL);
        size++;
        return true;
    }
    head = new Node(val, head);
    size++;
    return true;
}

//Sort the list by the specified key
void RectangleList::sort() {
    for (Node* nodeActual = head; nodeActual != NULL; nodeActual = nodeActual->next) {
        Node* min = nodeActual;
        for (Node* nodeSecond = nodeActual->next; nodeSecond != NULL; nodeSecond = nodeSecond->next) 
            if(min->data->area() > nodeSecond->data->area()) min = nodeSecond;
       	//Workaround to do it in place. Where are those bonus points?
        ElementType* tempData = nodeActual->data;
        nodeActual->data = min->data;
        min->data = tempData;
    }
}

//Get the total area ocupied by rectangles
unsigned int RectangleList::area() const {
	int result = 0;
    
    //Simple discrete math equation. Add all areas and substract all intersections.
    for (Node* nodeActual = head; nodeActual != NULL; nodeActual = nodeActual->next) {
        result += nodeActual->data->area();
        if(nodeActual->next != NULL)
            result -= nodeActual->data->intersection(nodeActual->next->data);
    }
    return (unsigned int) result;
}

//Get length of the list
unsigned int RectangleList::getSize() const {
    return size;
}