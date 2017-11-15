/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Aggegation.h
 * Author: ELCOT
 *
 * Created on 1 November, 2016, 8:00 PM
 */

#ifndef AGGREGATION_H
#include<iostream>
#include<cstdlib>
#include<string>
#define AGGREGATION_H
using namespace std;
#include <cstdlib>
#include<iostream>
#include<string>
using namespace std;


/*
 * 
 */
class TravelDate {
    string month;
    int day,year;
    int personID;
public:
    
    
        
    
    TravelDate(string m,int d,int y,int id):month(m),day(d),year(y),personID(id)
    {
        cout<<"\nCheck your travel date"<<month<<"/"<<day<<"/"<<year;
    }
    ~TravelDate(){
        cout<<"\nyour Dateoftravel is successfully deleted\n";
    }
};
class Payment {
    string mode;
public:
    Payment(string mo):mode(mo)
    {
        cout<<"\nYour payment mode was "<<mode<<endl;
    }
    ~Payment()
    {
        cout<<"\nYour money will be refunded within 24 hours\n";
    }
};
class TicketInfo
{
    long int ticketno;
    TravelDate DOT;
    int personID;
    Payment *refund;
public:
    TicketInfo(long int tno,string m,int d,int y,Payment *p):
    ticketno(tno),DOT(m,d,y,TicketInfo::uniquePersonID),personID(TicketInfo::uniquePersonID),refund(p) {
        cout<<"\nChecking ticket number in Booking status\n:";
    } 
   ~TicketInfo()
    {
        
        cout<<"\nYour ticket is successfully cancelled";
    }
    static int uniquePersonID;
};
int TicketInfo::uniquePersonID=1;

    
    








#endif /* AGGEGATION_H */

