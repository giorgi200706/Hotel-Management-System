#ifndef EDIT_RECORDS_H
#define EDIT_RECORDS_H

#include "Hotel.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

class Edit_Records : public Hotel{
	protected:
		int Edit_Records_num_return;
		
	public:
		Edit_Records();
		int Edit_Records_printmenu();
		~Edit_Records();
};

#endif
