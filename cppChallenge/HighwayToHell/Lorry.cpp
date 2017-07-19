/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lorry.cpp
 * Author: denniss
 * 
 * Created on July 17, 2017, 3:14 PM
 */

#include "../HighwayToHell/Lorry/Lorry.h"
#include "../HighwayToHell/Vehicle/Vehicle.h"

#include<iostream>

using namespace std;

Lorry::Lorry(colour_t colour_type, int no_of_seats, cargo_t cargo_type) : Vehicle(colour_type) {
    seats = no_of_seats;
    cargo = cargo_type;
}

Lorry::cargo_t Lorry::get_cargo_type() {
    return cargo;
}

int Lorry::get_num_seats() {
    return seats;
}

int Lorry::get_num_wheels() {
    return 8;
}

void Lorry::print_vehicle_details() {
    std::cout << "Here are the details of your lorry: \n";
    std::cout << "Cargo type: " << cargo << "\n";
    std::cout << "Number of wheels: " << get_num_wheels() << "\n";
    std::cout << "Number of seats: " << seats << "\n";
}