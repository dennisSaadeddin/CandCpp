/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackElement.cpp
 * Author: denniss
 * 
 * Created on June 28, 2017, 11:13 AM
 */
#include <string.h>
#include <iostream>

#include "StackElement/StackElement.h"
#include "Stack/Stack.h"

StackElement::StackElement( int gotData )
{
    data = gotData;
    next = NULL;
}

//StackElement::StackElement( const StackElement& orig )
//{
//}
//
//StackElement::~ StackElement( )
//{
//}

