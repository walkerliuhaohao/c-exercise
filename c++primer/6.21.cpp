#include<iostream>
using namespace std;
//return不能这么用 
//int compare(int&m,int&n){
//	m>=n?(return m):(return n);
//}

int compare(int &m,int &n){
	if(m>=n)
		return m;
	else
		return n;
	}
//交换俩个int型指针不能这么用		 
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
	//change(&m,&n) ;不能这样换,&m,&n是常型， 
	auto j= &m,k=&n;
	change(j,k); 
	cout<<j<<endl<<k;
}


