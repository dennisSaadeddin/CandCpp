/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Motorbike.cpp
 * Author: denniss
 * 
 * Created on July 17, 2017, 4:28 PM
 */
#include <iostream>

#include "Motorbike/Motorbike.h"

using namespace std;

Motorbike::Motorbike(colour_t colour_type, int no_of_seats, motorbike_t motorbike_type) : Vehicle(colour_type) {
    seats = no_of_seats;
    motorbike = motorbike_type;
}

Motorbike::motorbike_t Motorbike::get_motorbike_type() {
    return motorbike;
}

int Motorbike::get_num_seats() {
    return seats;
}

int Motorbike::get_num_wheels() {
    return 2;
}

void Motorbike::print_vehicle_details() {
    std::cout << "Here are the details of your motorbike: \n";
    std::cout << "Bike type: " << motorbike << "\n";
    std::cout << "Number of wheels: " << get_num_wheels() << "\n";
    std::cout << "Number of seats: " << seats << "\n";
}