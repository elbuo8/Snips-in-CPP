//
//  Runner.cpp
//  
//
//  Created by Yamil Asusta on 9/14/12.
//
//

#include <iostream>

#include "PointList.h"
#include "Point.h"

using namespace std;

int main (void) {
    
    cout << "Insert number of Points you want to create: ";
    int index;
    cin >> index;
    
    //Test the append method.
    PointList list;
    int inputCoorX;
    int inputCoorY;
    for (int i = 0; i < index; i++) {
        cout << "Insert x: ";
        cin >> inputCoorX;
        cout << "Insert y: ";
        cin >> inputCoorY;
        list.append(Point(inputCoorX, inputCoorY));
        cout << "Created and added to the list"<<endl;
        cout << list;
    }
	
    //Test the empty method
    cout << "That concluded the test of append()"<<endl;
    if (!list.empty()) cout << "\nIf this printed then the empty method is working."<<endl;
    
    //Test the insert method
    cout <<"\n Testing insert method"<<endl;
    cout << "Insert x: ";
    cin >> inputCoorX;
    cout << "Insert y: ";
    cin >> inputCoorY;
    cout << "Insert the position you want to test: ";
    cin >> index;
    
    if(list.insert(Point(inputCoorX,inputCoorY), index)) cout << "Inserted"<<endl;
    else cout << "Not inserted" <<endl;
    cout << list;
   
    //Test the remove by position method
    cout <<"\n Testing remove by position method\nInsert position:"<<endl;
    cin >> index;
    if(list.remove(index)) cout << "Removed"<<endl;
    else cout << "Not Removed" <<endl;
    cout << list;
    
    //Test the insertNear method
    cout <<"\n Testing insertNear method"<<endl;
    cout << "Insert x: ";
    cin >> inputCoorX;
    cout << "Insert y: ";
    cin >> inputCoorY;
    
    if(list.insertNear(Point(inputCoorX,inputCoorY))) cout << "Inserted"<<endl;
    else cout << "Not inserted" <<endl;
    cout << list;
    
    //Test the remove by distance method
    cout <<"\n Testing remove by distance method"<<endl;
    cout << "Insert x: ";
    cin >> inputCoorX;
    cout << "Insert y: ";
    cin >> inputCoorY;
    if(list.remove(Point(inputCoorX, inputCoorY))) cout << "Removed"<<endl;
    else cout << "Not Removed" <<endl;
    cout << list;
    
    //Test the clear method
    list.clear();
    if(list.empty()) cout << "Clear method works also" <<endl;
    else cout << "Clear doesn't work" <<endl;
    cout << list;
           
}
