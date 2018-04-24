#include<bits/stdc++.h>
#include"bus..h"
using namespace std;

void BUS::readbus()
{	cout<<"\n"<<"Enter the name of the customer rented bus :";
	cin>>b_naam;
	cout<<"\n"<<"Enter the number of Buses Rented:";
	cin>>no_of_bus;
	cout<<"\n"<<"Enter the number of days rented:";
	cin>>no_of_daysbus;
cout<<"\n";
}


void BUS::displaybus()
{
cout<<"\n"<<"Enter the name of the customer rented BUS:"<<"\n"<<b_naam;
cout<<"\n"<<"The number of Buses rented is:"<<"\n"<<no_of_bus;
cout<<"\n"<<"The number of days rented is:"<<"\n"<<no_of_daysbus;
}
