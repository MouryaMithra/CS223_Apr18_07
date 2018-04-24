#ifndef CAR_H
#define CAR_H
#include<bits/stdc++.h>
using namespace std;

class car
{
public:
char accident_gradec;
char car_type[20];
char companyc[20];
char name_c[20];
float car_cost;
int car_number;
int number_of_daysc;
float total_costc;
float finec;

void readc();
void displayc();
void totalcostc();
void calcfinec();
};
#endif
