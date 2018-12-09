#pragma once
#include <vector>
#include <fstream>
#include "getData.h"
#include <ctime>
#include <deque>
#include <list>
#include <set>

using namespace std;

class showResult
{
	ifstream infile;
	vector<int> v;
	deque<int> d;
	list<int> l;
	set<int> s;
	multiset<int> m;
	void pushVector();
	void pushDeque();
	void pushList();
	void pushSet();
	void pushMultiset();
	getData data;
	void searchVector();
	void searchSet();
	void searchMultiset();
	void insertVector();
	void insertDeque();
	void insertList();
	void removeVector(int);
	void removeDeque(int);
	void startVector();
	void startdeque();
	void startList();
	void startSet();
	void startMultiset();
public:
	showResult();
	~showResult();
};

