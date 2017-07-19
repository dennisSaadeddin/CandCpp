/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: denniss
 *
 * Created on June 26, 2017, 9:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

#include "Stack/Stack.h"
#include "StackElement/StackElement.h"

using namespace std;

/*
 * 
 */
int main( int argc, char** argv )
{
    int answer;
    bool isEmpty = true;
    Stack dirtyDishes;

    std::cout << "Stack.is_empty() returned " << dirtyDishes.is_empty( ) << ", expected true." << std::endl ;

    dirtyDishes.push( 3 );
    std::cout << "pushed 3\n";
    std::cout << "Stack.is_empty() returned " << dirtyDishes.is_empty( ) << ", expected false." << std::endl ;

    dirtyDishes.push( 18 );
    std::cout << "pushed 18\n";
    dirtyDishes.push( 6 );
    std::cout << "pushed 6\n";
    dirtyDishes.push( 27 );
    std::cout << "pushed 27\n";

    std::cout << "about to print dirtyDishes" << std::endl;
    std::cout << "--------------------------" << std::endl;
    dirtyDishes.print();
    std::cout << "--------------------------" << std::endl;
    
    
    answer = dirtyDishes.pop( );
    std::cout << "Expecting to pop 27. Actually got " << answer << std::endl;
    std::cout << "Stack.is_empty() returned " << dirtyDishes.is_empty( ) << ", expected false." << std::endl ;

    answer = dirtyDishes.pop( );
    std::cout << "Expecting to pop 6. Actually got " << answer << std::endl;

    answer = dirtyDishes.pop( );
    std::cout << "Expecting to pop 18. Actually got " << answer << std::endl;

    answer = dirtyDishes.pop( );
    std::cout << "Expecting to pop 3. Actually got " << answer << std::endl;

    answer = dirtyDishes.pop( );
    std::cout << "Expecting to pop -1(no plates). Actually got " << answer << std::endl;

    std::cout << "Stack.is_empty() returned " << dirtyDishes.is_empty( ) << ", expected true." << std::endl ;

    return 0;
}

