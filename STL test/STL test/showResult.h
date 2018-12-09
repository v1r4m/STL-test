#pragma once
#include <vector>
#include <fstream>
#include "getData.h"
#include <ctime>

using namespace std;

class showResult
{
	ifstream infile;
	vector<int> v;
	void pushVector();
	getData data;
	void searchVector();
	void insertVector();
	void startVector();
public:
	showResult();
	~showResult();
};

