#include<iostream> 
#include<initializer_list>
#include<string> 
using namespace std;
int sum(initializer_list<int>);
void error_msg(initializer_list<string>i1);
//int main(){
//	initializer_list<int>m={0,1,2,3,4};
//	cout<<sum(m);
//}

//ֻ���hello 
int main(){
	initializer_list<string>sen={"hello","hi"};
	error_msg(sen);
}
	 


//ʹ�����Ƶ������Ķ�������initializer_list�е�Ԫ�� 
//int sum(initializer_list<int>m){
//	int Cnt=0;
//	for(auto beg=m.begin();beg!=m.end();++beg){
//		Cnt+=*beg;
//	}
//	return Cnt;
//}
//ʹ��forѭ�� 
int sum(initializer_list<int>m){
	int Cnt=0;
	for(auto elem:m)
		Cnt+=elem; 
	return Cnt;
}
void error_msg(initializer_list<string>i1){
	for(auto beg=i1.begin();beg!=i1.end()-1;++beg)
		cout<<*beg<<" ";
	cout<<endl;
}
