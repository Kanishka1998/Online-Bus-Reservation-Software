/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   seniorcitizen.h
 * Author: ELCOT
 *
 * Created on 1 November, 2016, 12:39 AM
 */

#ifndef SPECIALTICKET_H
#define SPECIALTICKET_H
#include<iostream>
#include<cstdlib>
#include<string>
#include "Ticket.h"
using namespace std;
class SpecialTicket:public Ticket
{
public:
    int concession;
public:
    
    void setConcession(int cost)
    {
        concession=cost-100;
    }
    int getConcession()
    {
        return concession;
    }
    /*SeniorCitizen()
    {
        
        Ticket(1000,"creditcard");
    }*/
    
                
};




#endif /* SENIORCITIZEN_H */


















