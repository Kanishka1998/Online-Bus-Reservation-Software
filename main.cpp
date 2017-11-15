

#include <cstdlib>
#include"passenger.h"
#include "Route.h"
#include "Bus.h"
#include "Ticket.h"
#include "BUSTYPE.h"
#include "specialticket.h"
#include "Aggregation.h"
#include "Administrator.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
using namespace std;
Passenger createDetails()
{
    Passenger temp;
    
    
    int age,adid;
    int NAME_SIZE=51;
    char name[NAME_SIZE],emailid[NAME_SIZE];
    
    
     fstream psngr("D:/NetBeansProjects/psngr.txt",ios::app);
    if(!psngr)
    {
        cout<<"error opening file. program aborting\n";
        exit(1);
    }
    
        cout<<"Enter the following information about a"<<"passenger:\n";
        cout<<"Name:"<<endl;
        cin>>name;
        psngr<<name<<"        ";
        psngr<<"\n";
        
        
                
        
        
        
        
        cout<<"Age:\n";
        cin>>age;
        psngr<<age<<"        ";
        
        psngr<<"\n";
        cout<<"Email id:\n";
        cin>>emailid;
        //psngr<<emailid<<endl;
        psngr<<emailid<<"           ";
        psngr<<"\n";
        cout<<"Enter your aadharid\n";
        cin>>adid;
        
        
        psngr<<adid<<"            ";
        psngr<<"\n*************";
        psngr<<"\n";
        psngr.close();
        temp.storeInfo(name,emailid,age,adid);
        return temp;
}
void showValues( Passenger &details) {
    cout<<"\n Name"<<details.getName();
    cout<<"\n Emailid"<<details.getEmailid();
    cout<<"\n Age"<<details.getAge();
    cout<<"\n Adharid"<<details.getAdno();
}
int checkAvailability()
{
    static int count;
    count++;
    int maxSeats=80;
    if(count<maxSeats)
        return maxSeats-count;
    else
        return 0;
    
}
Route createRoute() {
    Route R1;
    
    string arrcity,deptcity,dot;
    fstream route("D:/NetBeansProjects/route.txt",ios::app );
    if(!route)
    {
        cout<<"error opening file. program aborting\n";
        exit(1);
    }
            
    cout<<"\nEnter arrcity\n";
    cin>>arrcity;
    
    route<<arrcity<<"  ";
    cout<<"Enter deptcity\n";
    cin>>deptcity;
    route<<"\n";
    route<<deptcity<<" ";
    cout<<"Enter dateoftravel\n";
    cin>>dot;
    route<<"\n";
    route<<dot<<" ";
    route<<"\n";
    route<<"\n********\n";
    
    
    R1.storeRoute(deptcity,arrcity,dot);
    return R1;
    route.close();
}
void showDetails(Route &det)
{
    cout<<"\n Departurecity";
    cout<<det.getDeptcity();    
    cout<<"\n Arrivalcity"<<det.getArrcity();
    cout<<"\n Dateoftravel"<<det.getDOT();
}
    
Bus createBus()
{  
    Bus b1;
    string btype;
    int seatno;
    char ch;
    fstream bus("D:/NetBeansProjects/bus.txt",ios::app );
    if(!bus)
    {
        cout<<"error opening file. program aborting\n";
        exit(1);
    }
    cout<<"\nEnter type of Bus\n";
    cin>>btype;
    bus<<"\n";
    bus<<btype;
    cout<<"\nChecking availability of seats in the specified bustype:\n";
        seatno=checkAvailability();
        
           
        
        bus<<"\n";
        bus<<seatno;
    b1.storeBus(btype,seatno);
    return b1;
    bus<<"************";
    bus<<"\n";
    bus.close();
}
void showSeats(Bus &S)
{
    cout<<"\n Type of Bus"<<S.getBustype();
    cout<<"\nSeats available"<<S.getSeats();
}
void PassengerDetails()
{
    Passenger P=createDetails();
    showValues(P);
}
void RouteDetails()
{
    Route R=createRoute();
    showDetails(R);
}
void seatsDetails()
{
    Bus B=createBus();
    showSeats(B);
}
void TicketDetails()
{
string bank,branch,acno;
fstream pay("D:/NetBeansProjects/pay.txt",ios::app );
    if(!pay)
    {
        cout<<"error opening file. program aborting\n";
        exit(1);
    }
pay<<"\n";
Ticket *T=new Ticket(600,"netBanking");
                                cout<<"\n cost of ticket"<<T->getCost();
                                cout<<"\n Payment Mode\n"<<T->getMode();
                                T->setConcession(1000);
                                if(T->getMode()=="netBanking")
                                {
                                    cout<<"\nEnter bank name and branch\n";
                                            cin>>bank>>branch;
                                            pay<<bank<<"       ";
                                            pay<<"\n";
                                            pay<<branch<<"     ";
                                            pay<<"\n";
                                    cout<<"\nEnter account no\n";
                                    cin>>acno;
                                    pay<<acno<<"     ";
                                    pay<<"\n";
                                }
                                cout<<"\nAre you a physically challenged,if yes Enter yes?\n";
                                       string ans;
                                        cin>>ans;
                                if(ans=="yes")
                                {
                                    SpecialTicket pc;
                                     pc.setConcession(600);
                                     cout<<"\nConcession for physicallychallenged\n";
                                     cout<<"\n Original cost of ticket is 600";

                                    cout<<"\nCost of ticket after concession is\n";
                                    cout<<pc.getConcession();
                                }

                                        pay<<"*********";
                                        pay<<"\n";
                               
                                        pay.close();
}
void BusDetails()

{
    string btype;
    cout<<"Enter the type of Bus you desire 1.A/Csleeper 2.NonA/Csleeper\n";
    cin>>btype;
    if(btype=="A/Csleeper")
    {     ACsleeper a;
    a.checkAvailability(btype);
    a.BusAvailability(); }
    else if(btype=="NonA/Csleeper")
    {
        NonACsleeper non;
        non.checkAvailability(btype);
        non.BusAvailability();
    }
    else
    {
        cout<<"Only A/C and nonA/c sleeper buses available\n";
    }
    
}
    

int main() {
            int choice=0,choice1=0;
            cout<<"---BUS RESERVATION SYSTEM---";
            do
            {
            cout<<"\n\nEnter 1.User 2.Administrator 3.exit";
            cin>>choice;
            switch(choice){
                do
                {
                case 1:cout<<"\n\nEnter 1.PassengerDetails 2.RouteDetails 3.BusAvailability 4.seatsAvailability 5.BookTicket 6.Cancellation 7.Exit\n";
                    cin>>choice1;
                    switch(choice1)
                    {
                        case 1: PassengerDetails();
                                
                                break;
                        case 2: 
                            RouteDetails();
                                
                                break;
                        case 3: BusDetails();
                                break;
                        case 4: 
                                seatsDetails();
                               break;
                        case 5:
                            TicketDetails();
                            break;
                        case 6: 
                                cout << "\nTICKET CANCELLATION\n";
                                cout<<"If you want to cancel your ticket,enter yes\n";
                                string can;
                                cin>>can;
                                if(can=="yes")
                                {
                                    Payment ref("NetBanking");
                                    TicketInfo *T1=new TicketInfo(12789,"May",15,2016,&ref);
                                    delete T1;


                                }   
                                break;
                        
                               
                            
    
                    }
                }while(choice1!=7);
                break;
                case 2:
                    cout<<"\n----Username and password identification---\n";
                    DBoff D1;
                    string username,password;
                    cout<<"\ncheck entered username and password with the exixting username in Database\n";
                    cin>>username>>password;
                    D1.setUserID(username,password);
                    cout<<"\n Changing user's password\n";
                    cout<<D1.changePassword();
                    break;
                    
            }
            }while(choice!=3);
            

    return 0;
}
