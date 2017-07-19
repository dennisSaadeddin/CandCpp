/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListElement.cpp
 * Author: denniss
 * 
 * Created on June 23, 2017, 4:19 PM
 */
#include <string.h>
#include <iostream>

#include "../ListsWithPointers/ListElement/ListElement.h"

using namespace std;

ListElement::ListElement( int data )
{
    nodeData = data;
    next = NULL;
    prev = NULL;
}