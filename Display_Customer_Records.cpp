#include "Display_Customer_Records.h"
#include "Hotel.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

Display_Customer_Records::Display_Customer_Records(){
	Display_Customer_Records_num = 0;
	more_records = " ";
}

int Display_Customer_Records::Display_Customer_Records_main_function(){
	
	for(int i=0; i<1; i=i){
		cout<<"enter room to be displayed : ";
		cin>>Display_Customer_Records_num;
		
		// gamovitant informacia (txt fails ar vxmarobt)
		cout<<endl<<endl
			<<"Room code : DSS"<<endl
			<<"Room no.  : "<<Display_Customer_Records_num<<endl
			<<"Status    : 0"<<endl
			<<"Tariff    : 2"<<endl
			<<"do u wish to see more records (y/n) : ";
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
	cout<<endl<<"==========================="<<endl<<endl;
	Hotel h;
	h.Hotel_printmenu();
}

Display_Customer_Records::~Display_Customer_Records(){}
