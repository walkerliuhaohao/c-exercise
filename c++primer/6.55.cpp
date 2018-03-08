#include<iostream>
#include<vector>
using namespace std;
int sum(int a, int b);
int dec(int a, int b);
int multi(int a, int b);
int divi(int a, int b);
typedef decltype(sum) *pfunc;//四个函数指针类型一样，所以可以用typedef另起个名字
							 //函数指针不知道是否要在主函数中调用该函数才能用 
int main() {
	vector<pfunc>s;
	s.push_back(sum);
	s.push_back(dec);
	s.push_back(multi);
	s.push_back(divi);
	for (auto iter = s.begin(); iter != s.end() ; ++iter) {
		cout << *iter<<endl;
	}
	system("pause");
}
int sum(int a, int b) {
	return a + b;
}
int dec(int a, int b) {
	return a -b;
}
int multi(int a, int b) {
	return a * b;
}
int divi(int a, int b) {
	return a / b;
}
