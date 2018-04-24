#ifndef HEAVY_H
#define HEAVY_H
#include<bits/stdc++.h>
#include"jcb.h"
#include"bus.h"
#include"van.h"
using namespace std;

class heavy: public JCB, public BUS, public VAN
{
	public:
	char name_of_borrowerh[20];
	double total_costh;
	void readh();
	void totalcosth();
	void displayh();
};
#endif


