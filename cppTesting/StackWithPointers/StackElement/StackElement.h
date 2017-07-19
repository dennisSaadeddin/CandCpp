/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackElement.h
 * Author: denniss
 *
 * Created on June 28, 2017, 11:13 AM
 */

#ifndef STACKELEMENT_H
#define STACKELEMENT_H

class StackElement
{

public:
    StackElement( int gotData );
    //    StackElement( const StackElement& orig );
    //    virtual ~ StackElement( );

    int data;
    StackElement * next;

private:

} ;

#endif /* STACKELEMENT_H */

