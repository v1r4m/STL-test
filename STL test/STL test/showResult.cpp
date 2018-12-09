#include "showResult.h"


void showResult::pushVector()
{
	infile.open("data.txt");
	int tmp = 0;
	while (!infile.eof())
	{
		infile >> tmp;
		v.push_back(tmp);
	}
	infile.close();
}

void showResult::searchVector()
{
	int tmpindex = data.indexAccess();

}

void showResult::insertVector()
{
	vector<int>::iterator iter = v.begin() + data.random(0, 1000000);
	v.insert(iter, data.random(0, time(0)));
}

void showResult::startVector()
{
	pushVector();
	cout << "Vector : Insert time : ";
	int timer = time(0);
	insertVector();
	cout << time(0) - timer << endl;
}

showResult::showResult()
{

}

showResult::~showResult()
{
}
