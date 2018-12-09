#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
using namespace std;

int random(int from, int to)
{
	return min(to, (int)((double)rand() / RAND_MAX*(to - from)) + from + (rand() % 2));
}





int main()
{
	vector<int> v;
	cout << random(0,time(0)) << endl;

	system("pause");
	return 0;
}