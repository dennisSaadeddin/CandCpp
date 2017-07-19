/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: denniss
 *
 * Created on June 21, 2017, 11:56 AM
 */
// what are these macros used for?
#ifndef NODE_H
#define NODE_H

class Node
{

public:
    Node( int nodeData, Node * par );
    //    Node( const Node& orig );

    virtual ~ Node( );
    void add( int nodeData );
    void add( Node * aNode );
    void remove( int nodeData );
    void print( );

    int data;
    int counter;

    Node * left_ptr;
    Node * right_ptr;
    Node * parent;

} ;

#endif /* NODE_H */

