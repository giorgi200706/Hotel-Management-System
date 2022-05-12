#ifndef DISPLAY_ROOM_RECORDS_H
#define DISPLAY_ROOM_RECORDS_H

#include "Hotel.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

class Display_Room_Records : public Hotel{
	protected:
		int Display_Room_Records_num;
		string more_records;
		
	public:
		Display_Room_Records();
		int Display_Room_Records_main_function();
		~Display_Room_Records();
};

#endif
