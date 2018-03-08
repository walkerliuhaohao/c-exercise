#include<iostream>
using namespace std;
int judge_upper(const string w){
	for(auto c:w)
		if(isupper(c))
			return 0;
	return -1;
}
//返回的有大写
//void change(string &w){
//	for(auto c:w)
//		tolower(c);
//}
//修改成功
//void change(string &w){
//	for(auto &c:w)
//		c=tolower(c);
//}
//使用迭代器，返回的还是有大写 
//void change(string &w){
//	for(auto iter=w.begin();iter!=w.end()-1;++iter)
//		tolower(*iter);
//}
//修改迭代器
void change(string& w){
	for(auto iter=w.begin();iter!=w.end();++iter)
		*iter=tolower(*iter);
	}
int main(){
	string w;
	cin>>w;
	cout<<judge_upper(w);
	change(w);
	cout<<w;
}
