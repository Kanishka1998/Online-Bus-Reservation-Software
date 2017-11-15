/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rect.h
 * Author: ELCOT
 *
 * Created on 31 October, 2016, 9:37 PM
 */

#ifndef PASSENGER_H
#define PASSENGER_H
#include<iostream>

#include<cstdlib>
#include<string.h>
using namespace std;

class Passenger
{
protected:
    string name,emailid;
    int age;
    int aadharno;
public:
    void storeInfo(string n,string e,int a,int ad)
    {
        name=n;
        emailid=e;
        age=a;
        aadharno=ad;
    }
    string getName()
    {
        return name;
    }
    string getEmailid()
    {
        return emailid;
    }
    int getAge()
    {
        return age;
    }
    int getAdno()
    {
        return aadharno;
    }
    Passenger createDetails();
    void showValues( Passenger&);
    
    
};



#endif 

