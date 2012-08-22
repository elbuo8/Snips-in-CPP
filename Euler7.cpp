/*
 * Euler7.cpp
 *
 *  Created on: Aug 22, 2012
 *      Author: yamilasusta
 */

#include <iostream>

using namespace std;

bool isPrime (int n);

int main (void) {
	int counter = 6;
	for (int i = 14; i > 0; i++) {
		if(isPrime(i)) counter++;
		if(counter == 10001) {
			cout << i<<endl;
			return 0;
		}
	}
}

bool isPrime (int n) {
	for(int i = 2; i < n/2; i++)
		if(n%i == 0) return false;
	return true;
}




