#include "Edit_Records.h"
#include "Hotel.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

Edit_Records::Edit_Records(){
	
}

int Edit_Records::Edit_Records_printmenu(){
	// print the menu
	cout<<"        EDIT"<<endl
		<<"1. ROOM RECORDS"<<endl
		<<"2. CUSTOMER RECORDS"<<endl
		<<"3. BACK"<<endl<<endl
		<<"ENTER YOUR CHOISE : ";
		
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
	cout<<endl<<"==========================="<<endl<<endl;
	
	// add class subjects
	Hotel h;
	
	
	if(Edit_Records_num_return == 1){
		
	}else if(Edit_Records_num_return == 2){
		
	}else if(Edit_Records_num_return == 3){
		h.Hotel_printmenu();
	}
	
	
}

Edit_Records::~Edit_Records(){}
