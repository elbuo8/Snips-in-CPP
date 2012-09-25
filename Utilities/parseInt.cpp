//
//  parseInt.cpp
//  
//
//  Created by Yamil Asusta on 9/24/12.
//
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	
    int value = 0;
    for (int i = string(argv[2]).length() - 1 ; i >= 0; i--) 
        value += int(pow(10.0,double(i))) * (argv[2][i] - '0');
        
    cout<<value<<endl;

}
