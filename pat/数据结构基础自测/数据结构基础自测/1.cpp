#include<iostream>
#include<string>
using namespace std;
void printf(int, char);
int main() {
	int N;
	char f;
	cout << "�������";
	cin >> N;
	cout << "�������";
	cin >> f;
	printf(N, f);
	system("pause");
}
void printf(int N, char f) {
	if (N % 2 == 0) {
		cout << "��������Ŀ";
		return;//������������ִ�к�������Ϊ����ĺ���������void����������return ���治�ܸ�������
	}
	else {
		//���������1��
		for (int i = N; i >= 1; i -= 2) {//��ÿһ�еķ��Ÿ��� 
										 //��ո� 
			for (int m = 0; m <= N; ++m) {
				if (m < (N + 1) / 2 - (i - 1) / 2 || m >(N + 1) / 2 + (i - 1) / 2)
					cout << ' ';
				else
					cout << f;
			}
			cout << endl;
		}
		//��1�������N��
		if (N == 1)
			return;
		for (int i = 3; i <= N; i += 2) {//��ÿһ�еķ��Ÿ��� 
										 //��ո� 
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

