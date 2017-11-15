 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Route.h
 * Author: ELCOT
 *
 * Created on 31 October, 2016, 11:04 PM
 */

#ifndef ROUTE_H
#define ROUTE_H
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class Route {
protected:
    string departurecity,arrivalcity,dateoftravel;
public:
    void storeRoute(string dep,string arr,string dot)
    {
        departurecity=dep;
        arrivalcity=arr;
        dateoftravel=dot;
    }
    string getDeptcity()
    {
        return departurecity;
    }
    string getArrcity()
    {
        return arrivalcity;
    }
    string getDOT()
    {
        return dateoftravel;
    }
    
    

Route createRoute();
void showDetails(Route &);

// <editor-fold defaultstate="collapsed" desc="comment">
 // </editor-fold>
};




#endif /* ROUTE_H */

