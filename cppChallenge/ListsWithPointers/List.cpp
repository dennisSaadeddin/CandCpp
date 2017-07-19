/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.cpp
 * Author: denniss
 * 
 * Created on June 23, 2017, 9:30 AM
 */

#include <string.h>
#include "../ListsWithPointers/List/List.h"
#include "../ListsWithPointers/ListElement/ListElement.h"

#include <iostream>

using namespace std;

List::List() {
    head = NULL;
    tail = NULL;
    empty = true;
}

void List::add_element(int val) {
    ListElement * node = new ListElement(val);
    if (head == NULL) {
        head = node;
    }
    if (tail != NULL) {
        node->prev = tail;
        tail->next = node;
    }
    tail = node;

    empty = false;

}

ListElement * List::search(int val) {
    for (ListElement * temp = head; temp != NULL; temp = temp-> next) {
        if (temp->nodeData == val) {
            return temp; // found the element
        }
    }

    return NULL; // didn't find anything
}

void List::delete_node(int val) {
    ListElement * tmp = NULL;
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
}

void List::print() {
    // i is a copy of the head, so I don't have to move the head around, thus changing its value.
    ListElement * i = head;

    while (i != NULL) {
        std::cout << i->nodeData << " ";
        i = i->next;
    }

    std::cout << std::endl;
}