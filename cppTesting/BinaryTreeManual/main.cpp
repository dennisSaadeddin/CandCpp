/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: denniss
 *
 * Created on June 19, 2017, 9:40 AM
 */

#include <iostream>
#include <cstdlib>

#include "Node.h"

/*
 * 
 */
int main( int argc, char** argv )
{
    Node * root = new Node( 40, NULL );
    root->add( 30 );
    root->add( 22 );
    root->add( 35 );
    root->add( 11 );
    root->add( 28 );
    root->add( 23 );
    root->add( 24 );
    root->add( 10 );
    root->add( 13 );
    root->add( 65 );
    root->add( 55 );
    root->add( 79 );
    
    root->print( );

    root->remove( 30 );
    root->print( );
    root->remove( 11 );
    root->print( );
//    root->remove( 5 );
//    root->print( );
//    root->remove( 5 );
//    root->print( );
    return 0;
}

