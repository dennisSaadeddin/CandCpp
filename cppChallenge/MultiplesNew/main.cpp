/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: denniss
 *
 * Created on July 11, 2017, 10:53 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 *  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *   Find the sum of all the multiples of 3 or 5 below 1000.
 */
int target = 999;

int sumDivBy ( int n )
{
    int p;
    p = target / n;
    return n * ( p * ( p + 1 ) / 2 );
}

int main( int argc, char** argv )
{
    long int sum = 0;

    sum = sumDivBy( 3 ) + sumDivBy( 5 ) - sumDivBy( 15 );

    std::cout << sum << std::endl;

//    Less efficient solution
//    int my_sum = 0;
//    for ( int i = 1; i < 1000 ; i ++ )
//    {
//        if ( ( i % 3 ) == 0 || ( i % 5 ) == 0 )
//        {
//            std::cout << i << " ";
//            sum += i;
//        }
//    }
    return 0;
}

