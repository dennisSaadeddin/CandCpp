/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.cpp
 * Author: denniss
 * 
 * Created on June 26, 2017, 10:29 AM
 */
#include <iostream>
#include <string.h>

#include "Stack/Stack.h"
#include "StackElement/StackElement.h"

using namespace std;

Stack::Stack( )
{
    head = NULL;
    empty = true;
}

//Stack::Stack( const Stack& orig )
//{
//}
//
//Stack::~ Stack( )
//{
//}
//

void Stack::push( int gotValue )
{
    StackElement * elem = new StackElement( gotValue );

    if ( head != NULL )
    {
        elem->next = head;
    }

    head = elem;

    empty = false;
}

int Stack::pop( )
{
    int answer = - 1;

    if ( head != NULL )
    {
        answer = head->data;
        StackElement * temp = head;
        head = head->next;
        delete temp;
    }

    if ( head == NULL )
    {
        empty = true;
    }

    return answer;
}

bool Stack::is_empty( )
{
    return empty;
}

void Stack::print( )
{

    if ( head != NULL )
    {
        StackElement * headPtr = head;
        while ( headPtr != NULL )
        {
            std::cout << "This is plate number: " << headPtr->data << std::endl;
            headPtr = headPtr->next;
        }
    }
    else
    {
        std::cout << "The stack is empty";
    }
}