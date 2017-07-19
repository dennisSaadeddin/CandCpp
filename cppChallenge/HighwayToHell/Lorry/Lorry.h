/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lorry.h
 * Author: denniss
 *
 * Created on July 17, 2017, 3:14 PM
 */

#ifndef LORRY_H
#define LORRY_H

#include "../Vehicle/Vehicle.h"
#include "../Lorry/Lorry.h"

class Lorry : public Vehicle {
public:

    enum cargo_t {
        NUCLEAR,
        BEER,
        IMMIGRANTS
    };

    Lorry(colour_t colour_type, int no_of_seats, cargo_t cargo_type);

    cargo_t get_cargo_type();
    int get_num_seats();
    int get_num_wheels();
    void print_vehicle_details();

    int seats;
    cargo_t cargo;

private:

};

#endif /* LORRY_H */

