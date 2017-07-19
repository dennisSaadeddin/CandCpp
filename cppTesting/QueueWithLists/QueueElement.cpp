/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QueueElement.cpp
 * Author: denniss
 * 
 * Created on June 23, 2017, 4:19 PM
 */
#include <string.h>
#include <iostream>

#include "QueueElement/QueueElement.h"

using namespace std;

QueueElement::QueueElement( int data )
{
    nodeData = data;
    next = NULL;
}


//
//QueueElement::QueueElement( const QueueElement& orig )
//{
//}
//
//QueueElement::~ QueueElement( )
//{
//}

