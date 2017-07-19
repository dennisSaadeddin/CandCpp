/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: denniss
 *
 * Created on July 11, 2017, 11:55 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
 *
 *  1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 *  By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
 */
int sum = 0;
int target = 4000000;

void fibonacciEvenSum( int previous, int current )
{
    if ( current < target )
    {
        if ( current % 2 == 0 )
        {
            sum += current;
        }
        fibonacciEvenSum( current, current + previous );
    }
}

void fibonacciPrint( int previous, int current )
{
    std::cout << previous << " ";
    if ( current < target )
    {
        fibonacciPrint( current, current + previous );
    }
}

int main( int argc, char** argv )
{
    //fibonacciPrint( 0, 1 );
    fibonacciEvenSum( 0, 1 );
    std::cout << std::endl << sum;
    return 0;
}

