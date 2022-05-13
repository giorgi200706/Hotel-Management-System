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
		
	public:
		Edit_Room();
		int Edit_Room_printmenu();
		~Edit_Room();
};

#endif
