/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: denniss
 *
 * Created on July 11, 2017, 3:49 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/*
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 */

bool checkPrime(long long int i) {
    for (long long int j = 2; j <= (long long int)(i / 2); j++) {
        if (i % j == 0)
            return false;
    }
    return true;
}

int main(int argc, char** argv) {
    long long int my_number = 13195;//600851475143;

    for (long long int i = my_number / 2 ; i >= 2; i -= 2) {
        bool checked = false;
        if (my_number % i == 0) {
            checked = checkPrime(i);
        }

        if (checked == true) {
            std::cout << i << std::endl;
            return 0;
        }
    }

    return 0;
}

