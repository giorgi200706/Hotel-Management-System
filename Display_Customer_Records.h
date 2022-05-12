#ifndef DISPLAY_CUSTOMER_RECORDS_H
#define DISPLAY_CUSTOMER_RECORDS_H

#include "Hotel.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

class Display_Customer_Records : public Hotel{
	protected:
		int Display_Customer_Records_num;
		string more_records;
		
	public:
		Display_Customer_Records();
		int Display_Customer_Records_main_function();
		~Display_Customer_Records();
};

#endif
