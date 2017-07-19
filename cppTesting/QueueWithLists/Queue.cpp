/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.cpp
 * Author: denniss
 * 
 * Created on June 23, 2017, 9:30 AM
 */

#include <string.h>
#include "Queue/Queue.h"
#include "QueueElement/QueueElement.h"

#include <iostream>

using namespace std;

Queue::Queue( )
{
    head = NULL;
    tail = NULL;
    empty = true;
}

//Queue::Queue( const Queue& orig )
//{
//}
//
//Queue::~ Queue( )
//{
//}

void Queue::enqueue( int val )
{


    QueueElement * node = new QueueElement( val );

    if ( head == NULL )
    {
        head = node;
    }
    if ( tail != NULL )
    {
        tail->next = node;
    }
    tail = node;


    empty = false;

}

int Queue::dequeue( )
{
    int storeData = 0;

    if ( empty )
    {
        std::cout << "The Queue is empty." << std::endl;
    }

    else
    {
        QueueElement * temp = head;
        storeData = head->nodeData;
        head = head->next;
        delete temp;
    }

    empty = ( head == NULL );

    return storeData;
}

void Queue::print( )
{
    // i is a copy of the head, so I don't have to move the head around, thus changing its value.
    QueueElement * i = head;

    while ( i != NULL )
    {
        std::cout << i->nodeData << " ";
        i = i->next;
    }

std::cout << std::endl;
}

