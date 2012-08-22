//
//  main.cpp
//  HelloWorld
//
//  Created by Yamil Asusta on 8/21/12.
//  Copyright (c) 2012 Yamil Asusta. All rights reserved.
//

#include <iostream>
#include <stdio.h>

//Identify if number is a factor
//Identify if number is a prime

bool factor(int n, long factor);
bool isPrime(int n);

int main(int argc, const char * argv[])
{
    long number;
    printf("Insert Number\n");
    scanf("%ld",&number);
    //std::vector<int> primes;
    
    for (int i = 2; i <= number/2 ; i++) {
        if (factor(i, number)) {
            if(isPrime(i)) printf("%d\n", i);
        }
    }

    return 0;
}

bool factor(int n, long number) {
    if (number % n == 0) {
        return true;
    }
    return false;
}

bool isPrime(int n) {
    for (int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

