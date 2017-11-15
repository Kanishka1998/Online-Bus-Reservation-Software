/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Abstract.h
 * Author: ELCOT
 *
 * Created on 2 November, 2016, 7:02 AM
 */

#ifndef BUSTYPE
#define BUSTYPE_H
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;
class BusType 
{
protected:
    string type;
    int busno;
public:
    virtual void BusAvailability()=0;
    void checkAvailability(string t)
    {
        type=t;
        busno=5;
    }
    int getBusno()
    {
        return busno;
    }
};
class ACsleeper: public BusType
{
public:
    virtual void BusAvailability()
    {
        cout<<"No of A/Csleeper buses available on specified date\n"<<getBusno();
    }
    
};
class NonACsleeper: public BusType
{
public:
    virtual void BusAvailability()
    {
        cout<<"No of NonA/Csleeper buses available on specified date\n"<<getBusno();
    }
};




#endif /* ABSTRACT_H */

