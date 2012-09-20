/*
 * Euler6.cpp
 *
 *  Created on: Aug 22, 2012
 *      Author: yamilasusta
 */
#include <iostream>
#include <cmath>

using namespace std;

int main (void) {
	long firstResult = 0;
	long secondResult = 0;
	for (int i = 1; i <= 100; i++)
		firstResult += pow(double(i), 2);

	for (int i = 1; i <= 100; i++)
		secondResult += i;
	secondResult = pow(double(secondResult),2);

	cout << secondResult-firstResult;

}



