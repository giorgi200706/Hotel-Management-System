#include "Edit_Room.h"
#include "Hotel.h"
#include "Edit_Records.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

Edit_Room::Edit_Room(){
	Edit_Room_num_return = 0;
}
int Edit_Room::Edit_Room_printmenu(){
	
	// print the menu
	cout<<"         EDIT"<<endl<<endl
		<<"1. ADD ROOM RECORDS"<<endl
		<<"2. MODIFY ROOM RECORDS"<<endl
		<<"3. DELETE ROOM RECORDS"<<endl
		<<"4. BACK"<<endl<<endl<<endl
		<<"ENTER YOUR CHOISE : ";
		
	// Enter number and verify
	cin>>Edit_Room_num_return;
	if(Edit_Room_num_return<1 || Edit_Room_num_return>4){
		for(int i=0; i<1; i=i){
			cout<<"The number entered must be one of these numbers 1,2,3,4"<<endl
				<<"ENTER YOUR CHOISE : ";
			cin>>Edit_Room_num_return;
			if(Edit_Room_num_return>=1 && Edit_Room_num_return<=4){
				i = 1;
			}
		}
	}
	
	// add class subjects
	Hotel h;
	Edit_Records er;
	
	cout<<endl<<"==========================="<<endl<<endl;
	if(Edit_Room_num_return == 1){
		
	}else if(Edit_Room_num_return == 2){
		
	}else if(Edit_Room_num_return == 3){
		
	}else if(Edit_Room_num_return == 4){
		er.Edit_Records_printmenu();
	}
}

Edit_Room::~Edit_Room()
{
}
