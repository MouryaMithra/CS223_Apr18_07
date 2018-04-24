#include<bits/stdc++.h>
#include"heavy.h"
#include"bus.h"
#include"van.h"
using namespace std;

void heavy::readh()
{
	cout<<"\n"<<"ENTERING THE HEAVY VEHICLE DATA";
JCB::readjcb();
BUS::readbus();
VAN::readvan();
totalcosth();
cout<<"\n"<<"END OF HEAVY VEHICLE DATA ENTRY"<<"\n";
}
/*
**********************************heavy**function**two********************************
*/
void heavy::totalcosth()
{
	cout<<"\n"<<"CALCULATING HEAVY VEHICLE TOTALCOST";
total_costh=(no_of_jcb*no_of_daysjcb*435.5)+
( no_of_bus*no_of_daysbus*350.5)+
( no_of_van*no_of_daysvan*300.2);
cout<<"\n"<<"TOTAL COST CALCULATED"<<"\n";
}
/*
********************************heavy**function**three*********************************
*/
void heavy::displayh()
{
cout<<"\n"<<"DISPLAYING HEAVY VEHICLE DATA";
cout<<"\n"<<"The total cost is:"<<total_costh<<" Rupees";
JCB::displayjcb();
BUS::displaybus();
VAN::displayvan();
cout<<"\n"<<"END OF HEAVY VEHICLE DISPLAY"<<"\n";
}
