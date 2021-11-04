/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: denniss
 *
 * Created on July 17, 2017, 1:22 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

#include "Car/Car.h"
#include "Vehicle/Vehicle.h"
#include "Lorry/Lorry.h"
#include "Motorbike/Motorbike.h"

using namespace std;

int main(int argc, char** argv) {

    Vehicle * my_car = new Car(Vehicle::RED, 5, Car::TRABANT);
    my_car->print_vehicle_details();

    Vehicle * my_lorry = new Lorry(Vehicle::GRAY, 3, Lorry::IMMIGRANTS);
    my_lorry->print_vehicle_details();

    Vehicle * my_bike = new Motorbike(Vehicle::GRAY, 2, Motorbike::MAD_MAX);
    my_bike->print_vehicle_details();

    return 0;
}
