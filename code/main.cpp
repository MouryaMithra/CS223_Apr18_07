#include<bits/stdc++.h>
#include"car.h"
#include"heavy.h"
#include"expense.h"
using namespace std;
  int main(){
    expense ch;
	while(!ch.check()){
    cout<<endl<<"please re-enter login details.\n";
	system("pause");
	system("cls");
	}
	system("cls");

	//car ca;
//Variable declaration
	int c_size=0,h_size = 0;
	car c[50];
	heavy h[50];
	float profit = ch.expenses(c,h,c_size,h_size);
	bool exit = false;

	while(!exit){
		system("cls");
		cout<<"\t\t\t"<<"WELCOME TO THE VEHICLE DATA MANAGEMENT SYSTEM";
		short option;
		cout<<"\n\n0 : EXIT\n1 : Display All Car Details\n2 : Display All Heavy Vehicle Details\n3 : Total monthly Profit\n\n";
		cout<<"\tChoose option : ";cin>>option;

		switch(option){
			case 1:
				ch.displayCars(c,c_size);
				break;
			case 2:
				ch.displayHeavy(h,h_size);
				break;

			case 3:
				cout<<"\n\aTHE CURRENT MONTHLY PROFIT: "<<profit<<" Rupees\n";
				break;
			case 0:
				exit = true;
				break;
			default:
				cout<<"Invalid option choosen\n";
		}
		system("pause");
	}
	cout<<"\n\nEND OF PROGRAM";
	getchar();
	return(0);
  }
