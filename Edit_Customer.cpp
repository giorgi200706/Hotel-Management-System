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
		Edit_Customer_Add_Customer_Records();
	}else if(Edit_Customer_num_return == 2){
		Edit_Customer_Modify_Customer_Records();
	}else if(Edit_Customer_num_return == 3){
		Edit_Customer_Delete();
	}else if(Edit_Customer_num_return == 4){
		er.Edit_Records_printmenu();
	}
}

int Edit_Customer::Edit_Customer_Add_Customer_Records(){
	
	// add class subject
	Hotel h;
	// room_no , name , no_of_guest , address , phone , nationality , passport_no , advance , miscellineous , room_service;
	cout<<h.center("Enter the details of the Customer")<<endl<<endl;
	cout<<h.print100("Room no.      : ");
	cin>>room_no;
	cout<<h.print100("Name          : ");
	cin>>name;
	cout<<h.print100("No. of guests : ");
	cin>>no_of_guest;
	cout<<h.print100("Address       : ");
	cin>>address;
	cout<<h.print100("Phone         : ");
	for(int i=0; i<1; i=i){
		cin>>phone;
		if(phone.length() < 8){
			cout<<h.center("The length of the number should not be greater than 8 characters")<<endl;
			cout<<h.print100("Phone         : ");
		}else{
			i = 1;
		}
	}
	cout<<"";
	cout<<h.print100("Nationality   : ");
	cin>>nationality;
	cout<<h.print100("Passport no.  : ");
	cin>>passport_no;
	cout<<endl;
	cout<<h.print100("Advance       : ");
	cin>>advance;
	cout<<h.print100("Miscellineous : ");
	cin>>miscellineous;
	cout<<h.print100("Room service  : ");
	cin>>room_service;
	
	ofstream fout;
    fout.open("Customer.txt", fstream::app);
    fout<<room_no<<"		"<<name<<"		"<<no_of_guest<<"		"<<address<<"		"<<phone<<"		"<<nationality<<"		"<<passport_no<<"		"<<advance<<"		"<<miscellineous<<"		"<<room_service<<endl;
	
	cout<<endl<<center("======================================")<<endl<<endl;
	Edit_Customer_printmenu();
}
int Edit_Customer::Edit_Customer_Modify_Customer_Records(){
	
	// write
	
}
int Edit_Customer::Edit_Customer_Delete(){
	
	// write
		
}


Edit_Customer::~Edit_Customer(){}
