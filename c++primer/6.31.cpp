#include <iostream>  
#include<string>  
using namespace std;  
  
char &Get_val(string &a, int ix)//函数的声明及定义，接受两个参数，返回类型为非常量引用  
{  
    return a[ix];//字符串某一位置的字母  
}  
int main(int argc, char *argv[])  
{     
    string s = "an apple ";  
    cout<<"字符串修改前为："<<s<<endl;  
    Get_val(s,0) = 'A';//可以对非常量的引用返回值赋值  
    cout<<"字符串修改后为："<<s<<endl;      
    return 0;//代表执行成功  
}  
//输出修改后的字符串为  An apple 
