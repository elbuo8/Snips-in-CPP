//
//  Runner.cpp
//  
//
//  Created by Yamil Asusta on 9/27/12.
//
//

#include <iostream>
#include "List.h"

using namespace std;

int main(int argc, char* argv[]) {
	List list;
    list.push(3);
    cout<<list<<endl;
    list.insert(0,4);
    list.insert(2,1);
    list.push(5);
    cout <<list<<endl;
    list.remove(0);
    list.remove(1);
    cout<< list <<endl;
    list.shift();
    list.shift();
    cout<< list <<endl;
    list.push(8);
    cout<<list<<endl;
    list.insert(0,4);
    list.insert(2,1);
    list.push(5);
    cout<< list <<endl;
    list.pop();
    cout<< list <<endl;
    cout<<list.count()<<endl;
    list.reverse();
    cout<<list<<endl;
    list.push(7);
    cout<<list<<endl;
    list.insert(0,4);
    list.push(5);
    list.push(9);
    cout<<list<<endl;
    cout<<list.getElement(2)<<endl;
    //list.shuffle(list);
    //list.shuffle(list);
    cout<<list<<endl;
    cout<<list.getMiddle()<<endl;
    cout<<list.getElementFromBack(4)<<endl;
    list.removeOdds();
    cout<<list<<endl;
    return 0;
}
