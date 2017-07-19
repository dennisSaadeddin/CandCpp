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

#include <iostream>

using namespace std;

Queue::Queue( )
{
    data[Q_SIZE];
    head = 0;
    tail = 0;
    full = false;
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
    if ( full )
    {
        std::cout << "Queue is full. Maybe empty it?" << std::endl;
    }

    else
    {
        data[tail] = val;
        tail = ( tail + 1 ) % Q_SIZE;
    }

    // returns true is head = tail
    full = ( head == tail );

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
        storeData = data[head];
        head = ( head + 1 ) % Q_SIZE;
    }

    empty = ( tail == head );

    full = false;

    return storeData;
}

void Queue::print( )
{
    // i is a copy of the head
    int i = head;
    
    int countElements = 0;

    //    for ( int i = 0; i < Q_SIZE; i ++ )
    //    {
    //        std::cout << data[i] << " ";
    //    }

    // if the queue is full
    if ( full )
    {
        // while  we're not at the end of the memory space allocated for the elements
        while ( countElements != Q_SIZE )
        {
            // add 1 to the number of elements so that we'll know when we reached the end
            // of the allocated memory
            countElements ++;
            std::cout << data[i] << " ";
            // move the i(the copy of the head) around so that all elements can be printed.
            // keep in mind the actual head can end up anywhere around the queue,
            // because of the enqueue and dequeue operations.
            i = ( i + 1 ) % Q_SIZE;
        }
    }
    else
    {
        // if the queue is not full, while the copy of the head didn't reach the end tail
        while ( i != tail )
        {
            // print it and increment the copy of the head
            std::cout << data[i] << " ";
            i = ( i + 1 ) % Q_SIZE;
        }
    }

    std::cout << std::endl;
}

