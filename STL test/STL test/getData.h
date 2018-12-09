#pragma once
#include <fstream>
#include <iostream>

using namespace std;

class getData
{
private:
	ofstream outfile;
	ifstream infile;
	void inputdata();
	int getIndex();
	int index;

public:
	int indexAccess();
	int random(int, int);
	getData();
	~getData();
};

