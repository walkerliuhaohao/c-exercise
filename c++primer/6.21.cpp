#include<iostream>
using namespace std;
//return������ô�� 
//int compare(int&m,int&n){
//	m>=n?(return m):(return n);
//}

int compare(int &m,int &n){
	if(m>=n)
		return m;
	else
		return n;
	}
//��������int��ָ�벻����ô��		 
//void(int &(*m),int &(*n)){
//	int *a;
//	a=m;
//	m=n;
//	n=a;
//}
void change(int* &m,int* &n){
	int *a;
	a=m;
	m=n;
	n=a;
}

//print
int main(){
	int m=3,n=4;
	cout<<compare(m,n)<<endl;
	cout<<&m<<endl<<&n<<endl;
	//change(&m,&n) ;����������,&m,&n�ǳ��ͣ� 
	auto j= &m,k=&n;
	change(j,k); 
	cout<<j<<endl<<k;
}


