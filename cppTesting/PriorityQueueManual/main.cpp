/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: denniss
 *
 * Created on June 23, 2017, 9:16 AM
 */

#include <cstdlib>
#include <iostream>

#include "Queue/Queue.h"

using namespace std;

/*
 * 
 */
int main( int argc, char** argv )
{
    Queue pizzaQueue;

    pizzaQueue.enqueue( 24 );
    pizzaQueue.enqueue( 7 );
    pizzaQueue.enqueue( 3 );
    pizzaQueue.enqueue( 11 );
    pizzaQueue.enqueue( 10 );
    pizzaQueue.enqueue( 58 );

    std::cout << pizzaQueue.dequeue( ) << std::endl;

    pizzaQueue.print( );

    pizzaQueue.enqueue( 60 );

    pizzaQueue.print( );

    pizzaQueue.dequeue( );
    pizzaQueue.dequeue( );

    pizzaQueue.print( );

    pizzaQueue.enqueue( 23 );
    pizzaQueue.enqueue( 78 );
    pizzaQueue.enqueue( 12 );
    pizzaQueue.print( );

    pizzaQueue.dequeue( );
    pizzaQueue.print( );

    pizzaQueue.enqueue( 12 );
    pizzaQueue.print( );

    return 0;
}

