#ifndef EDIT_CUSTOMER_H
#define EDIT_CUSTOMER_H

#include "Edit_Records.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

class Edit_Customer : public Edit_Records{
	protected:
		int Edit_Customer_num_return;
		
	public:
		Edit_Customer();
		int Edit_Customer_printmenu();
		~Edit_Customer();
};

#endif
