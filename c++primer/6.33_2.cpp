//#include<iostream>
//#include<vector>
//using namespace std;
//void printf(vector::iterator  m,vector::iterator n);
//int main(){
//	vector<int>num={0,1,2,3,4,5,6,7,8,9};
//	auto m=num.begin();
//	auto n=num.end() ;
//	printf(m,n);
//}
//void printf(m,n){
//	if(m!=n)
//		cout<<*m;
//	++m;
//	printf(m,n);
//}


////������Χ��һֱ���ڵݹ�ѭ��֮�� 
//#include<iostream>
//#include<vector>
//using namespace std;
//void printf(vector<int>::iterator m, vector<int>::iterator n);
//int main() {
//	vector<int>num = { 0,1,2,3,4,5,6,7,8,9 };
//	auto m = num.begin();
//	auto n = num.end();
//	printf(m, n);
//}
//void printf(vector<int>::iterator m, vector<int>::iterator n){
//	if (m != n)
//		cout << *m;
//	++m;
//	printf(m, n);
//}

#include<iostream>
#include<vector>
using namespace std;
void printf(vector<int>::iterator m, vector<int>::iterator n);
int main() {
	vector<int>num = { 0,1,2,3,4,5,6,7,8,9 };
	auto m = num.begin();
	auto n = num.end();
	printf(m, n);
}
void printf(vector<int>::iterator m, vector<int>::iterator n){
	if (m != n)
	{
		cout << *m;
		printf(++m, n);//���m=n�Ͳ��õݹ���
	}
}
