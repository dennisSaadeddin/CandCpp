/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QueueElement.h
 * Author: denniss
 *
 * Created on June 23, 2017, 4:19 PM
 */

#ifndef QUEUEELEMENT_H
#define QUEUEELEMENT_H

class QueueElement
{

public:
    QueueElement( int data );
//    QueueElement( const QueueElement& orig );
//    virtual ~ QueueElement( );
    
    int nodeData;
    QueueElement * next;
    
private:

} ;

#endif /* QUEUEELEMENT_H */

