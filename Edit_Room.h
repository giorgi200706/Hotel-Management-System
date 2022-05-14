#ifndef EDIT_ROOM_H
#define EDIT_ROOM_H

#include "Edit_Records.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

class Edit_Room : public Edit_Records{
	protected:
		int Edit_Room_num_return;
		vector<string> data;
		string code , room_no , status , tariff;
		string save;
		string modify;
		int type;
		
	public:
		Edit_Room();
		int Edit_Room_printmenu();
		int Edit_Room_addroomrecords();
		int Edit_Room_modifyroomrecords();
		int Edit_Room_delteroomrecords();
		~Edit_Room();
};

#endif
