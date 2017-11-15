/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ticket.h
 * Author: ELCOT
 *
 * Created on 1 November, 2016, 12:11 AM
 */

#ifndef TICKET_H
#define TICKET_H
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class Ticket {
public:
    int ticketcost;
    string paymentmode;
public:
    Ticket()
    {
        ticketcost=1000;
        paymentmode="paytm";
    }
    Ticket(int cost,string mode) {
        ticketcost=cost;
        paymentmode=mode;
    }
    void setConcession(int cost)
    {
        cout<<"No concession for normal passengers\n";
    }
    int getCost()
    {
        return ticketcost;
    }
    string getMode()
    {
        return paymentmode;
    }
};
    




#endif /* TICKET_H */

