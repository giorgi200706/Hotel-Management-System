#include "Hotel.h"
#include "Edit_Records.h"
#include "Display_Room_Records.h"
#include "Display_Customer_Records.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

Hotel::Hotel(){
	num_return = 0;
}
string Hotel::center(string input) { 
    return string((113 - input.length()) / 2, ' ') + input;
}
string Hotel::print100(string input) { 
    return string(49, ' ') + input;
}
int Hotel::Hotel_printmenu(){
	// print the menu
	cout<<center("1. EDIT RECORDS")<<endl
		<<center("2. DISPLAY ROOM RECORDS")<<endl
		<<center("3. DISPLAY CUSTOMER RECORDS")<<endl
		<<center("4. EXIT TO DOS")<<endl<<endl<<endl
		<<center("ENTER YOUR CHOISE : ");
		
	// Enter number and verify
	cin>>num_return;
	if(num_return<1 || num_return>4){
		for(int i=0; i<1; i=i){
			cout<<center("The number entered must be one of these numbers 1,2,3,4")<<endl
				<<center("ENTER YOUR CHOISE : ");
			cin>>num_return;
			if(num_return>=1 && num_return<=4){
				i = 1;
			}
		}
	}
	
	// add class subjects
	Edit_Records er;
	Display_Room_Records drr;
	Display_Customer_Records dcr;
	
	cout<<endl<<center("======================================")<<endl<<endl;
	if(num_return == 1){
		er.Edit_Records_printmenu();
	}else if(num_return == 2){
		drr.Display_Room_Records_main_function();
	}else if(num_return == 3){
		dcr.Display_Customer_Records_main_function();
	}else if(num_return == 4){
		return 0;
	}
	
}

Hotel::~Hotel(){}
