//
//  List.h
//  
//
//  Created by Yamil Asusta on 9/26/12.
//
//

#ifndef ____List__
#define ____List__

#include <iostream>
#include <ostream>

using namespace std;

typedef int ElementType;

class Node {

public:
	ElementType data;
    Node* next;
    //Constructorm
    Node(const ElementType& val, Node* next);
};

class List {
public:
    
    //Constructor
    List();
    
    bool push(const ElementType& val);
    bool insert(const int& pos, const ElementType& val);
    bool remove(const int& pos);
    ElementType shift();
    ElementType pop();
    int count() const;
    void reverse();
    void shuffle(const List& list);
	ElementType getElement(const int& pos) const;
    ElementType getMiddle() const;
    ElementType getElementFromBack(const int& pos) const;
    bool removeOdds();
    
    friend ostream& operator<<(ostream& os, const List& list);
    
private:
    Node* head;

};



    

#endif /* defined(____List__) */
