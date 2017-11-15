/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Administrator.h
 * Author: ELCOT
 *
 * Created on 1 November, 2016, 10:55 PM
 */

#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include<string>
#include<cstdlib>
#include<iostream>
using namespace std;
class Administrator
{
protected:
    string username,password;
public:
    void setUserID(string u,string p)
    {
        username=u;
        password=p;
    }
    string getUsername(){
        return username; }
    virtual string getPassword(){
        return password;
    }
    string changePassword()
    {
        if(getPassword()==password)
        {
            cout<<"Passwords matched,password can be changed\n";
        }
        else
            cout<<"\n Password is incorrect";
        
    }
};
class DBoff:public Administrator
{
protected:
    string curpswd;
public:
    DBoff()
    {
        curpswd="Hello";
    }
    
    virtual string getPassword()
    {
        return curpswd;
    }
        
};



    
    





#endif /* ADMINISTRATOR_H */

