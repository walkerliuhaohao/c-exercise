#include<iostream>
#include<vector>
using namespace std;
void digui(vector<int>num);
int main(){
	vector<int>num={0,1,2,3,4,5,6,7,8,9};
	digui(num);
}
//ֹͣ���� 
//void digui(vector<int>num){
//	auto iter=num.end();
//	if(iter!=num.begin()){
//		--iter;
//		digui(num);
//	}
//	else
//		cout<<*iter;
//	}
void digui(vector<int>num){
	auto &iter=num.begin();//num.begin()��һ���� 
	if(iter==num.end())
		break;
	else
		++iter;
		digui(num);
		cout<<*iter ;
}
