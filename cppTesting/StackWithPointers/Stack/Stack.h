/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.h
 * Author: denniss
 *
 * Created on June 26, 2017, 10:29 AM
 */

#include"../StackElement/StackElement.h"

#ifndef STACK_H
#define STACK_H

class Stack
{

public:
    Stack( );
    //    Stack( const Stack& orig );
    //    virtual ~ Stack( );
    void push( int gotValue );
    int pop( );
    void print( );
    bool is_empty();

    StackElement * head;

    bool empty;

private:

} ;

#endif /* STACK_H */

