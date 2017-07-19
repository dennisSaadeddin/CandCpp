/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.cpp
 * Author: denniss
 * 
 * Created on June 21, 2017, 11:56 AM
 */

#include "Node.h"
#include <string.h>

#include <iostream>

Node::Node( int nodeData, Node * par )
{
    data = nodeData;
    left_ptr = NULL;
    right_ptr = NULL;
    parent = par;
    counter = 1;
}

//Node::Node( const Node& orig )
//{
//}

//this method creates & stores the nodes; it's also a search

void Node::add( int nodeData )
{
    if ( nodeData == data )
    {
        counter ++;
    }
    else if ( nodeData < data )
    {
        if ( left_ptr == NULL )
        {
            left_ptr = new Node( nodeData, this );
            //left_ptr->parent = this;
        }
        else
        {
            left_ptr->add( nodeData );
        }
    }
    else
    {
        if ( right_ptr == NULL )
        {
            right_ptr = new Node( nodeData, this );
        }
        else
        {
            right_ptr->add( nodeData );
        }
    }
}

// this method stores the nodes; it's also a search

void Node::add( Node * aNode )
{
    if ( aNode->data < data )
    {
        if ( left_ptr == NULL )
        {
            left_ptr = aNode;
            left_ptr->parent = this;
        }
        else
        {
            left_ptr->add( aNode );
        }
    }
    else
    {
        if ( right_ptr == NULL )
        {
            right_ptr = aNode;
            right_ptr->parent = this;
        }
        else
        {
            right_ptr->add( aNode );
        }
    }
}

void Node::remove( int nodeData )
{
    if ( nodeData == data )
    {

        counter --;

        if ( counter == 0 )
        {
            // if the parent's left_ptr is pointing to this instance
            if ( parent->left_ptr == this )
            {
                //disconnect from the parent
                parent->left_ptr = NULL;
            }
            else
            {
                //disconnect from the parent
                parent->right_ptr = NULL;
            }

            if ( left_ptr != NULL )
            {
                parent->add( left_ptr );
            }

            if ( right_ptr != NULL )
            {
                parent->add( right_ptr );
            }
            
            // remove the unused node from memory after moving the other nodes
            delete this;
        }
    }
    else if ( nodeData < data )
    {
        if ( left_ptr != NULL )
        {
            left_ptr->remove( nodeData );
        }
    }
    else
    {
        if ( right_ptr != NULL )
        {
            right_ptr->remove( nodeData );
        }
    }
}

void Node::print( )
{
    //    10 8 7 5 4 6 9 11 13 
    //    std::cout << data<<" " <<std::endl;

    std::cout << data << " " << counter << " " << ( ( parent != NULL ) ? parent->data : - 1 ) << std::endl;

    if ( left_ptr != NULL )
    {
        left_ptr->print( );
    }

    if ( right_ptr != NULL )
    {
        right_ptr->print( );
    }

    if ( parent == NULL )
    {
        std::cout << "----------------" << std::endl;
    }


    //    4 5 6 7 8 9 10 11 13 

    //
    //    if ( left_ptr != NULL )
    //    {
    //        left_ptr->print( );
    //    }
    //
    //    std::cout << data << " " << std::endl;
    //
    //    if ( right_ptr != NULL )
    //    {
    //        right_ptr->print( );
    //    }


    //    same as above, but descending order


    //    if ( right_ptr != NULL )
    //    {
    //        right_ptr->print( );
    //    }
    //
    //    std::cout << data << " " << counter << " " << ( ( parent != NULL ) ? parent->data : - 1 ) << std::endl;
    //
    //    if ( left_ptr != NULL )
    //    {
    //        left_ptr->print( );
    //    }



    //    4 6 5 7 9 8 13 11 10

    //
    //    if ( left_ptr != NULL )
    //    {
    //        left_ptr->print( );
    //    }
    //
    //    if ( right_ptr != NULL )
    //    {
    //        right_ptr->print( );
    //    }
    //    std::cout << data << " " << std::endl;


}

//void Node::storeParentNode( int nodeData )
//{
//    for ( int index = 0; index < 10; index ++ )
//    {
//        if ( nodeStore[index] != nodeData )
//        {
//            nodeStore[index] = nodeData;
//            std::cout << nodeStore[index] << " ";
//            break;
//        }
//    }
//}

Node::~ Node( )
{
}

