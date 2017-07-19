/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.h
 * Author: denniss
 *
 * Created on June 23, 2017, 9:30 AM
 */

#ifndef QUEUE_H
#define QUEUE_H
#define Q_SIZE 6

class Queue
{

public:
    Queue( );
    //    Queue( const Queue& orig );
    //    virtual ~ Queue( );
    void enqueue( int val );
    int dequeue( );
    void print( );

    int data[Q_SIZE];
    int head;
    int tail;
    bool full;
    bool empty;

private:

} ;

#endif /* QUEUE_H */

