#include<bits/stdc++.h>
#include"van.h"
using namespace std;

void VAN::readvan()
{
	cout<<"\n"<<"Enter the name of the customer rented van:";
	cin>>v_naam;
	cout<<"\n"<<"Enter the number of Vans Rented:";
	cin>>no_of_van;
	cout<<"\n"<<"Enter the number of days rented:";
	cin>>no_of_daysvan;
cout<<"\n";
}
void VAN::displayvan()
{
cout<<"Enter the name of the customer rented van :"<<"\n"<<v_naam;
cout<<"\n"<<"The number of Vans rented is:"<<"\n"<<no_of_van;
cout<<"\n"<<"The number of days rented is:"<<"\n"<<no_of_daysvan;
cout<<"\n";
}
