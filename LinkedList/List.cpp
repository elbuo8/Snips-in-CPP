//
//  List.cpp
//  
//
//  Created by Yamil Asusta on 9/26/12.
//
//

#include "List.h"

#include <iostream>
#include <ostream>

typedef int ElementType;

using namespace std;

Node::Node(const ElementType& val, Node* next) {
    data = val;
    this->next = next;
}

List::List() {
    head = NULL;
}

ostream& operator<<(ostream& os, const List& list) {
    Node* nodeActual = list.head;
    if(nodeActual == NULL) {
     	os << "{}";
        return os;
    }
    os << "{";
    while (nodeActual->next != NULL) {
        os << nodeActual->data<<", ";
        nodeActual = nodeActual->next;
    }
    os << nodeActual->data << "}";
    return os;
	
}

bool List::push(const ElementType& val) {
    if (head == NULL) {
    	head = new Node(val, NULL);
        return true;
    }
    head = new Node(val, head);
    return true;
}


bool List::insert(const int& pos, const ElementType& val) {
    if(pos == 0) {
		push(val);
    	return true;
    }
    
    Node* nodeActual = head;
    int counter = 1;
    while(counter != pos && nodeActual->next != NULL) {
        counter++;
        nodeActual = nodeActual->next;
    }
    if(counter != pos) return false;
    nodeActual->next = new Node(val, nodeActual->next);
    return true;
}

bool List::remove(const int& pos) {
    Node* nodeActual = head;
    if(pos == 0) {
        head = nodeActual->next;
        return true;
    }
    int counter = 1;
    while (nodeActual->next != NULL && counter < pos) {
        counter++;
        nodeActual = nodeActual->next;
    }
    if(counter != pos) return false;
    Node* temp = nodeActual->next;//Free that memory
    nodeActual->next = nodeActual->next->next;
    delete temp;
    return true;
}

ElementType List::shift() {
    Node* nodeActual = head;
    if(head == NULL) return NULL;
    
    head = nodeActual->next;
    ElementType val = nodeActual->data;
    delete nodeActual;
    return val;
}

ElementType List::pop() {
    Node* nodeActual = head;
    if(head == NULL) return NULL;
    
    while (nodeActual->next->next != NULL) {
        nodeActual = nodeActual->next;
    }
    ElementType val = nodeActual->next->data;
    delete nodeActual->next;
    nodeActual->next = NULL;
 	return val;
}

int List::count() const {
    int counter = 0;
    Node* nodeActual = head;
    while (nodeActual != NULL) {
        counter++;
       	nodeActual = nodeActual->next;
    }
    return counter;
}

void List::reverse() {
    List list;
    Node* nodeActual = head;
    while (nodeActual != NULL) {
        list.push(nodeActual->data);
        nodeActual = nodeActual->next;
    }
    head = list.head;
}

ElementType List::getElement(const int& pos) const {
    Node* nodeActual = head;
    for (int i = 0; i < pos; i++)
        nodeActual = nodeActual->next;
    return nodeActual->data;
}

void List::shuffle(const List& list) {
    List shuffled;
    Node* nodeActual = head;
    Node* nodeSecond = list.head;
    while (nodeActual != NULL || nodeSecond != NULL) {
        if(nodeActual != NULL) {
			shuffled.push(nodeActual->data);
        	nodeActual = nodeActual->next;
        }
        if(nodeSecond != NULL) {
			shuffled.push(nodeSecond->data);
        	nodeSecond = nodeSecond->next;
        }
    }
    head = shuffled.head;
}

ElementType List::getMiddle() const {
    Node* nodeActual = head;
    Node* nodeSecond = head;
    int counter = 0;
    while (nodeActual != NULL) {
        nodeActual = nodeActual->next;
        if(counter % 2 != 0)nodeSecond = nodeSecond->next;
        counter++;
    }
    return nodeSecond->data;
}

ElementType List::getElementFromBack(const int& pos) const {
    Node* nodeActual = head;
    Node* nodeSecond = head;
    int counter = 0;
    while (pos != counter) {
        nodeActual = nodeActual->next;
        counter++;
    }
    while (nodeActual != NULL) {
        nodeActual = nodeActual->next;
        nodeSecond = nodeSecond->next;
    }
    return nodeSecond->data;
}

bool List::removeOdds() {
    Node* nodeActual = head;
    int counter = 0;
    while (nodeActual != NULL) {
        if(nodeActual->data % 2 != 0) {
            nodeActual = nodeActual->next;
            remove(counter);
        }
        else {
            nodeActual = nodeActual->next;
            counter++;
        }
    }
    return true;
}
