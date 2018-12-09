#include "getData.h"
#include <ctime>
#include <Windows.h>
#include <iostream>
#include <fstream>

using namespace std;

int getData::random(int from, int to)
{
	return min(to, (int)((double)rand() / RAND_MAX*(to - from)) + from + (rand() % 2));
}

void getData::inputdata()
{
	outfile.open("data.txt");
	for (int i = 0; i < 1000000; i++)
	{
		outfile << random(0, time(0)) << endl;
	}
	outfile.close();
}

int getData::getIndex()
{
	infile.open("data.txt");
	int tmp = random(0,1000000);
	for (int i = 0; i < tmp; i++)
	{
		infile >> tmp;
	}
	index = tmp;
}

int getData::indexAccess()
{
	return index;
}

getData::getData()
{
	getIndex();
}


getData::~getData()
{
}
