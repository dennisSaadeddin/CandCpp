/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.h
 * Author: denniss
 *
 * Created on July 17, 2017, 1:57 PM
 */

#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string.h>

#include "Car.h"
#include "../Vehicle/Vehicle.h"

using namespace std;

class Car : public Vehicle {
public:

    enum car_t {
        MERCEDES,
        BMW,
        AUDI,
        TRABANT,
        DACIA
    };

    Car(colour_t colour_type, int no_of_seats, car_t car_mode);
    int get_num_seats();
    int get_num_wheels();
    car_t get_car_model();
    void print_vehicle_details();

    int seats;
    int wheels;
    car_t model;

private:

};

#endif /* CAR_H */

