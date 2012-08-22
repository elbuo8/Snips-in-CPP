/**
Solution to Euler problem #4
**/
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

bool isPalindome(int n);

int main (void) {

	int biggest = 0;

	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			//cout << i +  " * " + j <<endl;
			if (isPalindome(i*j) && (i*j) > biggest) {
				biggest = i*j;
				//cout << biggest;
			}
		}
	}
	cout << biggest;
	return 0;
}

bool isPalindome (int n) {
	//workaround to parse integer to string
	stringstream parse;
	parse << n;
	string number = parse.str();
	string reverse = "";
	for (int i = number.length()-1; i >= 0; i--) {
		reverse += number[i];
	}
	cout << reverse + " - " +  number <<endl;
	if ( reverse.compare(number) == 0) return true;
	return false;

}
