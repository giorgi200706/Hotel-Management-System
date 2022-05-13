#include "Edit_Customer.h"
#include "Hotel.h"
#include "Edit_Records.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

Edit_Customer::Edit_Customer(){
	Edit_Customer_num_return = 0;
}
int Edit_Customer::Edit_Customer_printmenu(){
	
	// add class subjects
	Hotel h;
	Edit_Records er;
	
	// print the menu
	cout<<h.center("EDIT CUSTOMER")<<endl<<endl
		<<h.center("1. ADD CUSTOMER RECORDS")<<endl
		<<h.center("2. MODIFY CUSTOMER RECORDS")<<endl
		<<h.center("3. DELETE")<<endl
		<<h.center("4. BACK")<<endl<<endl<<endl
		<<h.center("ENTER YOUR CHOISE : ");
		
	// Enter number and verify
	cin>>Edit_Customer_num_return;
	if(Edit_Customer_num_return<1 || Edit_Customer_num_return>4){
		for(int i=0; i<1; i=i){
			cout<<h.center("The number entered must be one of these numbers 1,2,3,4")<<endl
				<<h.center("ENTER YOUR CHOISE : ");
			cin>>Edit_Customer_num_return;
			if(Edit_Customer_num_return>=1 && Edit_Customer_num_return<=4){
				i = 1;
			}
		}
	}
	
	
	cout<<endl<<h.center("======================================")<<endl<<endl;
	if(Edit_Customer_num_return == 1){
		
	}else if(Edit_Customer_num_return == 2){
		
	}else if(Edit_Customer_num_return == 3){
		
	}else if(Edit_Customer_num_return == 4){
		er.Edit_Records_printmenu();
	}
}

Edit_Customer::~Edit_Customer(){}
