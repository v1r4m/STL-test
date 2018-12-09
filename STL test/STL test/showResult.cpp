#include "showResult.h"
#include <algorithm>


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

void showResult::pushDeque()
{
	infile.open("data.txt");
	int tmp = 0;
	while (!infile.eof())
	{
		infile >> tmp;
		d.push_back(tmp);
	}
	infile.close();

}

void showResult::pushList()
{
	infile.open("data.txt");
	int tmp = 0;
	while (!infile.eof())
	{
		infile >> tmp;
		l.push_back(tmp);
	}
	infile.close();

}

void showResult::pushSet()
{
	infile.open("data.txt");
	int tmp = 0;
	while (!infile.eof())
	{
		infile >> tmp;
		s.insert(tmp);
	}
	infile.close();
}

void showResult::pushMultiset()
{
	infile.open("data.txt");
	int tmp = 0;
	while (!infile.eof())
	{
		infile >> tmp;
		m.insert(tmp);
	}
	infile.close();
}

void showResult::searchVector()
{
	int tmpindex = data.indexAccess();

}

void showResult::searchSet()
{
	set<int>::iterator iter;
	iter = s.find(data.random(0, time(0)));
}

void showResult::searchMultiset()
{
	set<int>::iterator iter;
	iter = s.find(data.random(0, time(0)));
}

void showResult::insertVector()
{
	vector<int>::iterator iter = v.begin() + data.random(0, 1000000);
	v.insert(iter, data.random(0, time(0)));
}

void showResult::insertDeque()
{
	deque<int>::iterator iter;
	deque<int>::iterator iter2;
	iter = d.begin() + data.random(0, 1000000);
	iter2 = d.insert(iter, data.random(0, time(0)));
}

void showResult::insertList()
{
	list<int>::iterator iter;
	list<int>::iterator iter2;
	int tmp = data.random(0, 1000000);
	iter = next(l.begin(), tmp);
	iter2 = l.erase(iter);
	iter = iter2;
	iter2 = l.insert(iter, data.random(0, time(0)));
}

void showResult::removeVector(int nInput)
{
	vector<int>::iterator iter;
	iter = v.begin();
	while (iter != v.end())
	{
		if (*iter == nInput)
		{
			iter = v.erase(iter);
		}
		else
		{
			++iter;
		}
	}
}

void showResult::removeDeque(int nInput)
{
	deque<int>::iterator iter;
	iter = d.begin();
	while (iter != d.end())
	{
		if (*iter == nInput)
		{
			iter = d.erase(iter);
		}
		else
		{
			++iter;
		}
	}
}

void showResult::startVector()
{
	pushVector();
	cout << "Vector : Insert time : ";
	time_t timer = clock();
	insertVector();
	printf("%0.4fs\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	cout << "Vector : Search time : ";
	timer = clock();
	if (std::find(v.begin(), v.end(), data.random(0, time(0))) != v.end()) {}
	printf("%0.4fs\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	timer = clock();
	cout << "Vector : remove time: ";
	removeVector(data.random(0, time(0)));
	printf("%0.4fs\n\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	v.clear();
}

void showResult::startdeque()
{
	pushDeque();
	cout << "Deque : Insert time : ";
	time_t timer = clock();
	insertDeque();
	printf("%0.4fs\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	cout << "Deque : Search time : ";
	timer = clock();
	if (std::find(d.begin(), d.end(), data.random(0, time(0))) != d.end()) {}
	printf("%0.4fs\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	timer = clock();
	cout << "Deque : remove time: ";
	removeDeque(data.random(0, clock()));
	printf("%0.4fs\n\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	d.clear();
}

void showResult::startList()
{
	pushList();
	cout << "List : Insert time : ";
	time_t timer = clock();
	insertList();
	printf("%0.4fs\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	cout << "List : Search time : ";
	timer = clock();
	if (std::find(l.begin(), l.end(), data.random(0, time(0))) != l.end()) {}
	printf("%0.4fs\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	timer = clock();
	cout << "List : remove time: ";
	l.remove(data.random(0, time(0)));
	printf("%0.4fs\n\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	l.clear();
}

void showResult::startSet()
{
	pushSet();
	cout << "Set : Insert time : ";
	time_t timer = clock();
	s.insert(data.random(0, time(0)));
	printf("%0.4fs\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	cout << "Set : Search time : ";
	timer = clock();
	searchSet();
	printf("%0.4fs\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	timer = clock();
	cout << "Set : remove time: ";
	s.erase(data.random(0, time(0)));
	printf("%0.4fs\n\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	s.clear();
}

void showResult::startMultiset()
{
	pushMultiset();
	cout << "MultiSet : Insert time : ";
	time_t timer = clock();
	m.insert(data.random(0, time(0)));
	printf("%0.4fs\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	cout << "MultiSet : Search time : ";
	timer = clock();
	searchMultiset();
	printf("%0.4fs\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	timer = clock();
	cout << "MultiSet : remove time: ";
	m.erase(data.random(0, time(0)));
	printf("%0.4fs\n\n", (float)(clock() - timer) / CLOCKS_PER_SEC);
	m.clear();
}

showResult::showResult()
{
	startVector();
	startdeque();
	startList();
	startSet();
	startMultiset();
}

showResult::~showResult()
{
}
