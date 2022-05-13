#include "Edit_Records.h"
#include "Hotel.h"
#include "Edit_Room.h"
#include "Edit_Customer.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

Edit_Records::Edit_Records(){
	Edit_Records_num_return = 0;
}

int Edit_Records::Edit_Records_printmenu(){
	
	// add class subjects
	Hotel h;
	Edit_Room er;
	Edit_Customer ec;
	
	// print the menu
	cout<<h.center("EDIT")<<endl<<endl
		<<h.center("1. ROOM RECORDS")<<endl
		<<h.center("2. CUSTOMER RECORDS")<<endl
		<<h.center("3. BACK")<<endl<<endl
		<<h.center(" ENTER YOUR CHOISE : ");
		
	// Enter number and verify
	cin>>Edit_Records_num_return;
	if(Edit_Records_num_return<1 || Edit_Records_num_return>3){
		for(int i=0; i<1; i=i){
			cout<<"The number entered must be one of these numbers 1,2,3"<<endl
				<<"ENTER YOUR CHOISE : ";
			cin>>Edit_Records_num_return;
			if(Edit_Records_num_return>=1 && Edit_Records_num_return<=4){
				i = 1;
			}
		}
	}
	cout<<endl<<h.center("======================================")<<endl<<endl;
	
	
	if(Edit_Records_num_return == 1){
		er.Edit_Room_printmenu();
	}else if(Edit_Records_num_return == 2){
		ec.Edit_Customer_printmenu();
	}else if(Edit_Records_num_return == 3){
		h.Hotel_printmenu();
	}
	
}

Edit_Records::~Edit_Records(){}
