/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListElement.h
 * Author: denniss
 *
 * Created on June 23, 2017, 4:19 PM
 */

#ifndef LISTELEMENT_H
#define LISTELEMENT_H

#include <string.h>
#include <iostream>

using namespace std;

template <typename T>
class ListElement {

    public:
    ListElement(T data);

    T nodeData;
    ListElement * next;
    ListElement * prev;

private:

};

template <typename T>
ListElement<T>::ListElement(T data) {
    nodeData = data;
    next = NULL;
    prev = NULL;
}

#endif /* LISTELEMENT_H */
