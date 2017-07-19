/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: denniss
 *
 * Created on June 23, 2017, 9:30 AM
 */

#ifndef LIST_H
#define LIST_H

#include <string.h>
#include "../List/List.h"
#include "../ListElement/ListElement.h"

#include <iostream>

using namespace std;

template <typename T>
class List {
public:
    List();

    void add_element(T val);
    void print();
    ListElement<T> * search(T val);
    void delete_node(T val);

    bool empty;

    ListElement<T> * head;
    ListElement<T> * tail;

private:

};

template <typename T>
List<T>::List() {
    head = NULL;
    tail = NULL;
    empty = true;

};

template <typename T>
void List<T>::add_element(T val) {
    ListElement<T> * node = new ListElement<T>(val);
    if (head == NULL) {
        head = node;
    }
    if (tail != NULL) {
        node->prev = tail;
        tail->next = node;
    }
    tail = node;

    empty = false;

};

template <typename T>
ListElement<T> * List<T>::search(T val) {
    for (ListElement<T> * temp = head; temp != NULL; temp = temp-> next) {
        if (temp->nodeData == val) {
            return temp; // found the element
        }
    }

    return NULL; // didn't find anything
};

template <typename T>
void List<T>::delete_node(T val) {
    ListElement<T> * tmp = NULL;
    tmp = search(val); // search for the val to be deleted

    if (tmp == head) {
        head = tmp->next;
        head->prev = NULL;
        if (tmp == tail) {
            tail = NULL;
        }
        delete tmp;
    } else {
        tmp->prev->next = tmp->next;
        if (tmp == tail) {
            tail = tmp->prev;
            tail->next = NULL;
        } else { // i need the else to bypass null pointer exception
            tmp->next->prev = tmp->prev;
        }
        delete tmp;
    }
};

template <typename T>
void List<T>::print() {
    // i is a copy of the head, so I don't have to move the head around, thus changing its value.
    ListElement<T> * i = head;

    while (i != NULL) {
        std::cout << i->nodeData << " ";
        i = i->next;
    }

    std::cout << std::endl;
};

#endif /* LIST_H */