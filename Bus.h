/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bus.h
 * Author: ELCOT
 *
 * Created on 31 October, 2016, 11:32 PM
 */

#ifndef BUS_H
#define BUS_H
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
class Bus
{
protected:
    string bustype;
    int noOfseats;
public:
    
    void storeBus(string b,int no)
    {
        bustype=b;
        noOfseats=no;
    }
    string getBustype()
    {
        return bustype;
    }
    int getSeats()
    {
        return noOfseats;
    }
    Bus createBus();
    void showSeats(Bus &);
};


#endif /* BUS_H */

