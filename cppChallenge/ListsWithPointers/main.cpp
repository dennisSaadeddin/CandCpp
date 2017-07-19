/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: denniss
 *
 * Created on June 23, 2017, 9:16 AM
 */

#include <cstdlib>
#include <iostream>

#include "../ListsWithPointers/List/List.h"
#include "../ListsWithPointers/ListElement/ListElement.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    List<int> pizzaQueue;
    // always initialize pointers
    // ListElement<int> * tmp = NULL;

    pizzaQueue.add_element(24);
    pizzaQueue.add_element(7);
    pizzaQueue.add_element(3);
    pizzaQueue.add_element(11);
    pizzaQueue.add_element(10);
    pizzaQueue.add_element(58);

    //    tmp = pizzaQueue.search( 10 );
    //    std::cout << "YO!! " << tmp->next->nodeData << std::endl;
    //    
    pizzaQueue.print();
    pizzaQueue.delete_node(11);
    pizzaQueue.print();
    pizzaQueue.delete_node(24);
    pizzaQueue.print();
    pizzaQueue.delete_node(58);
    pizzaQueue.print();
    pizzaQueue.add_element(37);
    pizzaQueue.print();
    pizzaQueue.add_element(28);
    pizzaQueue.print();


    List<std::string> burgerQueue;
    // always initialize pointers
    burgerQueue.add_element("24");
    burgerQueue.add_element("7");
    burgerQueue.add_element("3");
    burgerQueue.add_element("11");
    burgerQueue.add_element("10");
    burgerQueue.add_element("58");

    //    tmp = burgerQueue.search( 10 );
    //    std::cout << "YO!! " << tmp->next->nodeData << std::endl;
    //    
    burgerQueue.print();
    burgerQueue.delete_node("11");
    burgerQueue.print();
    burgerQueue.delete_node("24");
    burgerQueue.print();
    burgerQueue.delete_node("58");
    burgerQueue.print();
    burgerQueue.add_element("37");
    burgerQueue.print();
    burgerQueue.add_element("28");
    burgerQueue.print();



    //   std::cout << pizzaQueue.remove_element( ) << std::endl;

    //   pizzaQueue.print( );

    //    pizzaQueue.add_element( 60 );
    //
    //    pizzaQueue.print( );
    //
    //    pizzaQueue.remove_element( );
    //    pizzaQueue.remove_element( );
    //
    //    pizzaQueue.print( );
    //
    //    pizzaQueue.add_element( 23 );
    //    pizzaQueue.add_element( 78 );
    //    pizzaQueue.add_element( 12 );
    //    pizzaQueue.print( );
    //
    //    pizzaQueue.remove_element( );
    //    pizzaQueue.print( );
    //
    //    pizzaQueue.add_element( 12 );
    //    pizzaQueue.print( );

    return 0;
}