#include<iostream>
using namespace std;
int judge_upper(const string w){
	for(auto c:w)
		if(isupper(c))
			return 0;
	return -1;
}
//���ص��д�д
//void change(string &w){
//	for(auto c:w)
//		tolower(c);
//}
//�޸ĳɹ�
//void change(string &w){
//	for(auto &c:w)
//		c=tolower(c);
//}
//ʹ�õ����������صĻ����д�д 
//void change(string &w){
//	for(auto iter=w.begin();iter!=w.end()-1;++iter)
//		tolower(*iter);
//}
//�޸ĵ�����
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
