#include "Display_Room_Records.h"
#include "Hotel.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

Display_Room_Records::Display_Room_Records(){
	Display_Room_Records_num = 0;
	more_records = " ";
}

int Display_Room_Records::Display_Room_Records_main_function(){
	
	// add class subjects
	Hotel h;
	
	for(int i=0; i<1; i=i){
		cout<<h.center("enter room to be displayed : ");
		cin>>Display_Room_Records_num;
		
		// gamovitant informacia (txt fails ar vxmarobt)
		cout<<endl<<endl
			<<h.print100("Room code : DSS")<<endl
			<<h.print100("Room no.  : ")<<Display_Room_Records_num<<endl
			<<h.print100("Status    : 0")<<endl
			<<h.print100("Tariff    : 2")<<endl
			<<h.center("do u wish to see more records (y/n) : ");
		for(int o=0; o<1; o=o){
			cin>>more_records;
			if(more_records == "y" || more_records == "n"){
				o = 1;
			}
		}
		cout<<endl;
		if(more_records == "n"){
			i = 1;
		}
	}
	cout<<endl<<h.center("======================================")<<endl<<endl;
	h.Hotel_printmenu();
	
}

Display_Room_Records::~Display_Room_Records(){}
