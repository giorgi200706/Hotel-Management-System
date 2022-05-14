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
	code  = room_no  = status = tariff = save = " ";
	modify = " ";
	type = 0;
}
int Edit_Room::Edit_Room_printmenu(){
	
	// add class subjects
	Hotel h;
	Edit_Records er;
	
	// print the menu
	cout<<h.center("EDIT")<<endl<<endl
		<<h.center("1. ADD ROOM RECORDS")<<endl
		<<h.center("2. MODIFY ROOM RECORDS")<<endl
		<<h.center("3. DELETE ROOM RECORDS")<<endl
		<<h.center("4. BACK")<<endl<<endl<<endl
		<<h.center("ENTER YOUR CHOISE : ");
		
	// Enter number and verify
	cin>>Edit_Room_num_return;
	if(Edit_Room_num_return<1 || Edit_Room_num_return>4){
		for(int i=0; i<1; i=i){
			cout<<h.center("The number entered must be one of these numbers 1,2,3,4")<<endl
				<<h.center("ENTER YOUR CHOISE : ");
			cin>>Edit_Room_num_return;
			if(Edit_Room_num_return>=1 && Edit_Room_num_return<=4){
				i = 1;
			}
		}
	}
	
	
	cout<<endl<<h.center("======================================")<<endl<<endl;
	if(Edit_Room_num_return == 1){
		Edit_Room_addroomrecords();
	}else if(Edit_Room_num_return == 2){
		Edit_Room_modifyroomrecords();
	}else if(Edit_Room_num_return == 3){
		Edit_Room_delteroomrecords();
	}else if(Edit_Room_num_return == 4){
		er.Edit_Records_printmenu();
	}
}


int Edit_Room::Edit_Room_addroomrecords(){
	
	// add class subjects
	Hotel h;
	Edit_Records er;
	
	cout<<h.center("Eter the details for the room")<<endl<<endl
		<<h.print100("Code	  : ");
	cin>>code;
	cout<<h.print100("Room no. : ");
	cin>>room_no;
	cout<<h.print100("Status   : ");
	cin>>status;
	cout<<h.print100("Tariff   : ");
	cin>>tariff;
	cout<<endl;
	cout<<h.center("do you want to save the record (y/n) : ");
	
	for(int i=0; i<1; i=i){
		cin>>save;
		if(save == "y" || save == "n"){
			if(save == "y"){
				data.push_back(code);
				data.push_back(room_no);
				data.push_back(status);
				data.push_back(tariff);
			}
			i = 1;
			break;
		}else{
			cout<<"enter 'y' or 'n' : ";
		}
	}
	cout<<endl<<h.center("======================================")<<endl<<endl;
	
	er.Edit_Records_printmenu();
	
	code  = room_no = status = tariff = " ";
	
}

int Edit_Room::Edit_Room_modifyroomrecords(){
	
	// this detail not works
	/*
	int k = -1;
	// add class subjects
	Hotel h;
	Edit_Records er;
	
	cout<<h.center("Enter the room code whose detail you want to change : ");
	cin>>modify;
	for(int i=0; i<data.size(); i = i+4){
		cout<<i<<"	";
		if(data[i] == modify){
			k = i;
		}
	}
	if(k == -1){
		cout<<"We do not have such a room in the base";
		Edit_Room_printmenu();
	}else{
		cout<<h.center("1. code")<<endl
			<<h.print100("2. room no.")<<endl
			<<h.print100("3. status")<<endl
			<<h.print100("4. tariff")<<endl;
		cout<<h.center("What detail do you want to change?  ");
		cin>>type;
		cout<<"enter a nwe one : ";
		cin>>data[k+type-1];
		Edit_Room_printmenu();
	}
	*/
	
}

int Edit_Room::Edit_Room_delteroomrecords(){
	
	// add class subjects
	Hotel h;
	data.clear();
	cout<<h.center("Everything was deleted")<<endl<<endl
		<<h.center("======================================")<<endl<<endl;
	Edit_Room_printmenu();
	
}

Edit_Room::~Edit_Room(){}
