#include<bits/stdc++.h>
#include"car.h"
#include"heavy.h"
using namespace std;

class expense
{
public:
float petrol_cost;
float maintenance_cost;
float government_tax;

bool check();
static bool check_int(string number_of_daysc,unsigned int size);
void displayHeavy( heavy h[],const int size);
void displayCars( car c[],const int size);
int addCar(car u[],float& t1);
int addHeavy(heavy w[],float& t3);
int expenses(car u[],heavy w[],int& c_size,int& h_size);
} ;
