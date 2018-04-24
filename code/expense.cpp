#include<bits/stdc++.h>
#include"expense.h"
using namespace std;

bool expense::check(){
	string ss,pp,f,s,p;
	cout<<"\tLOGIN :\n\n";
	ifstream file("db.txt",ios::in);
	if(file){
		file>>s>>p;
		file.close();
	}
	else{
		cout<<"File Not Found\n";
		s = "ra";
		p = "123";
		ofstream out("db.txt",ios::out);
		out<<s<<" "<<p<<"\n";
	}

	cout<<endl<<"user name  or press U if you forgot username :";
	getline(cin,ss);
	if(ss == "U"){
		cout<<"enter your best friend's name :";
		getline(cin,f);
		if(f == "sunny"){
			cout<<"your username is :"<<s;
			cout<<endl<<"enter new username : ";
			getline(cin,ss);
			s=ss;
			ofstream out("db.txt",ios::out);
			out<<ss<<" "<<p<<'\n';
		}
		else
		cout<<endl<<"wrong answer"<<endl;
	}
	cout<<endl<<"enter password or press N if u forgot password : ";
	getline(cin,pp);
	if(pp == "N"){
		cout<<"enter your best friend's name :";
		getline(cin,f);
		if(f == "sunny"){
			cout<<"your password is :"<<p;
			cout<<endl<<"enter new password ";
			getline(cin,pp);
			p = pp;
			ofstream out("db.txt",ios::out);
			out<<s<<" "<<pp<<'\n';
		}

		else
		cout<<endl<<"Wrong answer"<<endl;
	}
	if(ss==s&& pp==p)
		return true;
	return false;
}
bool expense::check_int(string number_of_daysc,unsigned int size){

if(number_of_daysc.size() != size)
    return false;
else{
    bool valid = true;
    for(int i =0;i<number_of_daysc.size();i++){
        if(isdigit(number_of_daysc[i]))
            valid = true;
        else
            valid = false;
    }
    return valid;
    }
}


int expense::addCar(car u[],float& t1){
	int L;
	char abc;
	cout<<"\n"<<"Add Car Data."<<"\a";
	cout<<"\n"<<"How many car records must be entered:"<<"\a";
while(true){
string temp;
cin>>temp;
L = 0;
if(expense::check_int(temp,2)){
    for(int i=0;i<temp.size();i++){
        L = L*10 + temp[i]-'0';
    }
    break;
}
else{
    cout<<"not a valid option\n Enter 2 digit valid option :";
}
}

if(cin.fail()){
    cin.clear();
    cin.ignore();
}


	for(int i=0;i<L;i++)
	//Loop to process car rental data
	{
		abc='n';
		u[i].readc();
		u[i].totalcostc();
		t1=t1+u[i].total_costc;
		getchar();
		cout<<"\n"<<"Do you want to see the entered car data? (y/n):";
		cin>>abc;
		if(abc=='y'||abc=='Y')
		{
			u[i].displayc();
		}

	}
	cout<<"\nThe total profit on car rent:"<<t1<<"Rupees\n";
	system("pause");
	return L;
}

int expense::addHeavy(heavy w[],float& t3){
	int n;
	char abc;
	system("cls");
	cout<<"\n"<<"Add Heavy Vehicle  Data."<<"\a";
	cout<<"\n"<<"How many heavy vehicle records must be entered:"<<"\a";
	while(true){
string temp;
cin>>temp;
n = 0;
if(expense::check_int(temp,2)){
    for(int i=0;i<temp.size();i++){
        n = n*10 + temp[i]-'0';
    }
    break;
}
else{
    cout<<"not a valid option\n Enter 2 digit valid option :";
}
}

if(cin.fail()){
    cin.clear();
    cin.ignore();
}

	for(int k=0;k<n;k++)
	//Loop to process heavy vehicle rental data
	{
	abc='n';
	w[k].readh();
	t3=t3+w[k].total_costh;
	cout<<"Do you want to see the entered heavy vehicle data(y/n):";
	cin>>abc;
	if(abc=='y'||abc=='Y')
	{
			w[k].displayh();
	}
	}
	cout<<"\nThe total profit on heavyvehicle rent:"<<t3<<"Rupees\n";
	system("pause");
	return n;
}

int expense::expenses(car u[],heavy w[],int& c_size,int& h_size){
	float t1=0,t2=0,t3=0,tot=0;

	c_size = addCar(u,t1);
	h_size = addHeavy(w,t3);

	if(c_size==0&&h_size==0){
		cout<<"\t\t"<<"NO VEHICLES RENTED\n";
	}
	else
	{
		expense exp;
		cout<<"\nENTER THE MONTHLY EXPENSES DATA";
		//Entering the business expenses
		cout<<"\nEnter the petrol/diesel cost:";
		cin>>exp.petrol_cost;
		cout<<"\nEnter the maintenance cost:";
		cin>>exp.maintenance_cost;
		cout<<"\nEnter the government taxloss:";
		cin>>exp.government_tax;
		tot=t1+t2+t3-(exp.petrol_cost+exp.maintenance_cost+exp.government_tax);
	}
	return tot;
}

void expense::displayCars( car c[],const int size){
	cout<<"Displaying all Cars Details : \n\n";
	for(int i = 0;i<size;i++)
		c[i].displayc();
}

void expense::displayHeavy( heavy h[],const int size){
	cout<<"Displaying all Heavy Vehicles Details : \n\n";
	for(int i = 0;i<size;i++)
		h[i].displayh();
}
