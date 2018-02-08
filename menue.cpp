//============================================================================
// Name        : Menue.cpp
// Author      : Sahir
// Version     :
// Copyright   : Your copyright notice
// Description : Responding to to list of options
//============================================================================

#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	char x;

	bool ind;




	cout<<"Input the option that you want me to do please 1 for factorial 2 for finding the year\n";
	cout<<"whether its leap or not and 3 to find maximum number between two No.s 4 for division of\n";
	cout<<" two numbers, if you chose E that mean yoy want to Exit the the program\n";
	cin>> x;
	ind=(x=='1')||(x=='2')||(x=='3')||(x=='4')||(x=='E');
	
	if (ind!=true) {cout<<"Error, Program is terminated.Enter valid value for x from 1-4 or E\n";cin>>x;return 0;}
	do
	{
		switch (x) {
		case '1':
			unsigned short No;
			unsigned long int factorial;//Not accepting initilazation here.
			factorial=1;
			cout<< "You choose to do factorial,please input the No. you want \n";
			cin>> No;
			for(int a=1;a<=No;a++)
			{
				factorial=factorial*a;
			}
			cout<< "You choose factorial of "<<No<<" which equals "<<factorial<<endl;
			break;
		case '2':
			unsigned int year;
			cout<< "you choose to know type of year please input the year you want to\n ";
			cin>> year;
			if (year%4 ==0)
				cout <<year<<" is Leap year\n";
			else
				cout<< year<<" is not Leap year\n";
			break;
		case '3':
			float No1,No2,ResultI;
			cout<<"you choose to find which No is maximum, Please Enter the two No.s\n";
			cin>> No1;
			cin>>No2;
			ResultI=((No1>No2)?No1:No2);
			cout<<"Result="<<ResultI<<"\n";//" but they might be equal "<<endl;
			break;
		case '4':

			unsigned int No3,No4;
			float ResultF;
			cout<<"you choose to divide two Nos , Please Enter the two No.s\n";
			cin>> No3;
			cin>>No4;
			if (No4==0) {cout<<"Devison by zero , Input non zero for the second No.\n";return 0;}
			ResultF=float(No3)/float(No4);
			cout<<"Result="<<ResultF<<endl;
			break;
		case 'E':
			cout << "You want to exit the program, good bye \n";
			return 0;
			break;
		default:
			cout<<"enter valid value for x from 1-4 or E\n";

		}
		cout<<"\n Please re-enter another value of x which is another option from your menu\n";
		cin>>x;

	}while (ind);


	return 0;
}

