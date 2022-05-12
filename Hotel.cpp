#include "Hotel.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

Hotel::Hotel(){
	
}
int Hotel::Hotel_printmenu(){
	cout<<"1. EDIT RECORDS"<<endl
		<<"2. DISPLAY ROOM RECORDS"<<endl
		<<"3. DISPLAY CUSTOMER RECORDS"<<endl
		<<"4. EXIT TO DOS"<<endl<<endl<<endl
		<<"ENTER YOUR CHOISE : ";
	cin>>num_return;
	if(num_return<1 || num_return>4){
		for(int i=0; i<1; i=i){
			cout<<"The number entered must be one of these numbers 1,2,3,4"<<endl
				<<"ENTER YOUR CHOISE : ";
			cin>>num_return;
			if(num_return>=1 && num_return<=4){
				i = 1;
			}
		}
	}
	return num_return;
}

Hotel::~Hotel(){}
