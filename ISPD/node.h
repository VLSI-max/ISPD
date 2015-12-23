#pragma once

class node {
private:
	char* node_name;
	int lowerleft_Xcoordinate;
	int lowerleft_Ycoordinate;
	char* movetype;

public:
	node(char* name = "ox",int x = 0, int y = 0, char* move = "FIXED") {
		node_name = name;
		lowerleft_Xcoordinate = x;
		lowerleft_Ycoordinate = y;
		movetype = move;
	}

	~node() { 
		delete[] node_name;
		delete[] movetype;
	//	delete lowerleft_Xcoordinate;
	//	delete lowerleft_Ycoordinate;
	}


};