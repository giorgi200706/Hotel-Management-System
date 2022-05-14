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
		string room_no , name , no_of_guest , address , phone , nationality , passport_no , advance , miscellineous , room_service;
		
	public:
		Edit_Customer();
		int Edit_Customer_printmenu();
		int Edit_Customer_Add_Customer_Records();
		int Edit_Customer_Modify_Customer_Records();
		int Edit_Customer_Delete();
		~Edit_Customer();
};

#endif
