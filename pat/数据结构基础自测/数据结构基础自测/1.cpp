#include<iostream>
#include<string>
using namespace std;
void printf(int, char);
int main() {
	int N;
	char f;
	cout << "输入个数";
	cin >> N;
	cout << "输入符号";
	cin >> f;
	printf(N, f);
	system("pause");
}
void printf(int N, char f) {
	if (N % 2 == 0) {
		cout << "不符合题目";
		return;//不符合跳出不执行函数，因为定义的函数类型是void，所以这里return 后面不能跟东西。
	}
	else {
		//从上输出到1个
		for (int i = N; i >= 1; i -= 2) {//打每一行的符号个数 
										 //打空格 
			for (int m = 0; m <= N; ++m) {
				if (m < (N + 1) / 2 - (i - 1) / 2 || m >(N + 1) / 2 + (i - 1) / 2)
					cout << ' ';
				else
					cout << f;
			}
			cout << endl;
		}
		//从1个输出到N个
		if (N == 1)
			return;
		for (int i = 3; i <= N; i += 2) {//打每一行的符号个数 
										 //打空格 
			for (int m = 0; m <= N; ++m) {
				if (m < (N + 1) / 2 - (i - 1) / 2 || m >(N + 1) / 2 + (i - 1) / 2)
					cout << ' ';
				else
					cout << f;
			}
			cout << endl;
		}


	}
}

