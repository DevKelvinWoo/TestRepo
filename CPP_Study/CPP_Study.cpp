#include <iostream>
#include "Test1.h"
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <memory>
#include <deque>

bool MakeTwice(int Input1)
{
	return Input1 % 2 == 0;
}

int main()
{	

	vector<int> TestVector = { 1, 1, 3, 3, 4, 4, 5 };
	list<int> TestList1 = { 1, 2, 3, 4, 5 };
	list<int> TestList2 = { 1, 2, 3, 7, 5 };
	deque<int> TestDeque1 = { 1, 2, 3, 4, 5 };
	deque<int> TestDeque2 = { 6, 7, 8, 9, 10 };
	map<int, float> TestMap = { {1, 1.5f}, {2, 2.5f}, {3, 3.5f} };
	set<int> TestSet = { 1, 2, 3, 4, 5 };
	
	stable_partition(TestList1.begin(), TestList1.end(), MakeTwice);
}
