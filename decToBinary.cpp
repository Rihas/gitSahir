//============================================================================
// Name        : calculater.cpp
// Author      : sahir
// Version     :
// Copyright   : Your copyright notice
// Description : decToBina in two ways
//============================================================================

#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	unsigned int No;
	char choice;
	int reminder=0;
	int base=1,binary=0;
	cout<< "Please enter the Number you want to find the binary Rep.: ";cin>>No;
	cout<<"\n choose the way you want to the binary No. to be calculated let's"<<endl;
	cout<<" consider 1 for arithmetic operation and 2 using bitwise operations"<<endl;
	cin>> choice;

	switch (choice)
	{
	case '1' :
		cout<< "You choose arithmetic operation to do that \n";

		reminder=No%2;
		cout<< No<<" in binary equals ";
		if (No<=1)
		{
			cout<<No<<endl;return 0;
		}
		else
		{
			while(No>0)
			{

				reminder=(No%2);
				No/=2;
				binary+=reminder*base;
				base*=10;

			};
			cout<<binary<<" \n"<<endl;
			
		}
			
		break;

	case '2':
		cout<< "You choose Bitwise operation to do that \n";
		cout<< No<<" in binary equals ";
		do
		{
			int remainder;

			if(No <= 0) {
				cout << No<<endl;
				return 0;
			}


			remainder = No%2;
			No=(No >> 1);
			cout << remainder;
		}while(No >= 0);
	cout<<"\n";
		break;
	default:
		cout << "Error,program is Ended. your Choice you 've"<<endl;
		cout<<" given is not correct,Please, input correct choice next time"<<endl;
	}
	return 0;
}


