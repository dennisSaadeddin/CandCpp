/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vehicle.h
 * Author: denniss
 *
 * Created on July 17, 2017, 1:23 PM
 */

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
public:

    enum colour_t {
        RED,
        BLUE,
        GREEN,
        GRAY
    };

    Vehicle(colour_t colour_type);
    virtual int get_num_seats() = 0;
    virtual int get_num_wheels() = 0;
    virtual void print_vehicle_details() = 0;

    colour_t colour;

private:

};

#endif /* VEHICLE_H */

