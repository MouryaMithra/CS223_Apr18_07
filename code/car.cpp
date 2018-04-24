#include<bits/stdc++.h>
#include"car.h"
using namespace std;


void car::readc()
{
	
cout<<"CAR DATA READING";
char c='n';
cout<<"\n"<<"Enter the borrowers name:";
cin.ignore();
cin.getline(name_c,20);
cout<<"\n"<<"Enter the car company:";
cin.getline(companyc,20);
cout<<"\n"<<"Enter the car number:";
cin>>car_number;
cout<<"\n"<<"Enter the number of days on rent:";
cin>>number_of_daysc;
cout<<"\n"<<"Enter the car type :";				//function for reading car data
cin>>car_type;
cout<<"\n"<<"Enter the car cost :";
cin>>car_cost;
cout<<"\n"<<"Has an accident been involved? (y/n):";
cin>>c;
if(c=='y'||c=='Y')
{
		calcfinec();
}
else
{
		accident_gradec='o';
finec=0.0;
}
cout<<"\n"<<"CAR DATA READING ENDED"<<"\n";
}
/*
********************car**function**two**********************/


void car::calcfinec()
{
	cout<<"\n"<<"CAR FINE BEING CALCULATED";
cout<<"\n"<<"Enter the accident grade(s for small accident)(m for medium accident)(b for big accident):";
cin>>accident_gradec;
float d;
if(strcmp(companyc,"ferrari")==0)
	d=10;
else if(strcmp(companyc,"toyota")==0)
	d=9;
else if(strcmp(companyc,"honda")==0)
	d=8;
else if(strcmp(companyc,"ford")==0)
//Function to calculate car fine
	d=7;
else if(strcmp(companyc,"dodge")==0)
	d=6;
else if(strcmp(companyc,"mitsubishi")==0)
	d=5;
else if(strcmp(companyc,"skoda")==0)
	d=4;
else if(strcmp(companyc,"maruti")==0)
	d=3;
else if(strcmp(companyc,"ambassador")==0)
	d=2;
//Fine=carcostx(accidentgrade/100)xcompany value
else
	d=1;

float e;
if((accident_gradec=='s')||(accident_gradec=='S'))
{
	e=3;
}
else if((accident_gradec=='m')||(accident_gradec=='M'))
{
	e=5;
}
else if((accident_gradec=='b')||(accident_gradec=='B'))
{
	e=8;
}
else
{
	e=1;
}
finec=float(car_cost*(e/100)*d);
cout<<"\n"<<"CAR FINE CALCULATED"<<"\n";
}
/*
******************************car**function**three*************************************
*/



void car::totalcostc()
{
	cout<<"\n"<<"TOTAL COST FOR CAR BEING CALCULATED";
	//Function to calculate car totalcost
	total_costc=(1000*number_of_daysc)+finec;
	cout<<"\n"<<"TOTAL COST CALCULATED"<<"\n";
}
/*
*****************************car**function**four***************************************
*/


void car::displayc()
{
cout<<"\n\t\t"<<"DISPLAYING CAR DATA";
cout<<"\n"<<"Name of the borrower of the car:";
puts(name_c);
cout<<"\n"<<"Number of days rented:"<<number_of_daysc;
cout<<"\n"<<"Cost of car borrowed:"<<car_cost;
cout<<"\n"<<"Car number :"<<car_number;
cout<<"\n"<<" car company is:";
puts(companyc);
cout<<"\n"<<" car type is:"<<car_type;
if(accident_gradec=='o')
{
cout<<"\n"<<"The borrower was not involved in any accident";	//Function to display car details
cout<<"\n"<<"fine=0";
}
else
{
cout<<"\n"<<"THE BORROWER WAS INVOLVED IN AN ACCIDENT";
cout<<"\n"<<"THE FINE IS:"<<finec<<"Rupees";
}
cout<<"\n"<<"The total cost is:"<<total_costc<<"Rupees";
cout<<"\n"<<"END OF CAR DATA DISPLAY"<<"\n";
}
