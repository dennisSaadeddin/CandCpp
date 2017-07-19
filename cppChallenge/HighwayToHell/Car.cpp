/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.cpp
 * Author: denniss
 * 
 * Created on July 17, 2017, 1:57 PM
 */

#include "Car/Car.h"
#include "Vehicle/Vehicle.h"
#include <iostream>
#include <string.h>

using namespace std;

Car::Car(colour_t colour_type, int no_of_seats, car_t car_model) : Vehicle(colour_type) {
    seats = no_of_seats;
    model = car_model;
}

Car::car_t Car::get_car_model() {
    return model;
}

int Car::get_num_seats() {
    return seats;
}

int Car::get_num_wheels() {
    return 4;
}

void Car::print_vehicle_details() {
    std::cout << "Here are the details of your car: \n";
    std::cout << "Car model: " << model << "\n";
    std::cout << "Number of wheels: " << get_num_wheels() << "\n";
    std::cout << "Number of seats: " << seats << "\n";
}