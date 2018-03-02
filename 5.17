#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>a1 = { 0,1,1,2 };
	vector<int>a2 = { 0,1,1,2,3,5,8 };
	auto iter1 = a1.begin();
	auto iter2 = a2.begin();
	for (; iter1 != a1.end(); ++iter1) {
		if (*iter1 != *iter2)
			break;
		++iter2;
	}
	if (iter1 == a1.end())
		cout << "yes";
	else
		cout << "no";
	system("pause");
}
