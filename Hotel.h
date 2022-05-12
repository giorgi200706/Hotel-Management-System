#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

class Hotel{
	protected:
		int num_return;
		
	public:
		Hotel();
		int Hotel_printmenu();
		~Hotel();
};

#endif
