#include <iostream>  
#include<string>  
using namespace std;  
  
char &Get_val(string &a, int ix)//���������������壬����������������������Ϊ�ǳ�������  
{  
    return a[ix];//�ַ���ĳһλ�õ���ĸ  
}  
int main(int argc, char *argv[])  
{     
    string s = "an apple ";  
    cout<<"�ַ����޸�ǰΪ��"<<s<<endl;  
    Get_val(s,0) = 'A';//���ԶԷǳ��������÷���ֵ��ֵ  
    cout<<"�ַ����޸ĺ�Ϊ��"<<s<<endl;      
    return 0;//����ִ�гɹ�  
}  
//����޸ĺ���ַ���Ϊ  An apple 
