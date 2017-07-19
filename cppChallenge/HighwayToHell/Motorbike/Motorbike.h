/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Motorbike.h
 * Author: denniss
 *
 * Created on July 17, 2017, 4:28 PM
 */

#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "../Vehicle/Vehicle.h"

class Motorbike : public Vehicle {
public:

    enum motorbike_t {
        SPORTS,
        MAD_MAX,
        HARLEY
    };

    Motorbike(colour_t colour_type, int no_of_seats, motorbike_t motorbike_type);

    motorbike_t get_motorbike_type();
    int get_num_seats();
    int get_num_wheels();
    void print_vehicle_details();

    int seats;
    motorbike_t motorbike;

private:

};

#endif /* MOTORBIKE_H */

