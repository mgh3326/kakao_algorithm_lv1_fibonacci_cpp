#include<iostream>
using namespace std;
int memo[50];
long long fibonacci(int n)//�޸������̼�
{//�޸������̼��� �߰��� ����� �ð� ���⵵�� O(N)�Դϴ�.
	if (n <= 1) {
		return n;
	}
	else if (memo[n] != 0) {
		return memo[n];
	}
	else {
		return memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
	/*if (n == 0)//
�� ����� ��� ȣ���� �̿��� ����Դϴ�. �ð� ���⵵�� �뷫 O(2N) ������ ������ �˴ϴ�. 
		return 0;
	else if (n == 1)
		return 1;
	else
	{
		long long a = fibonacci(n - 1) + fibonacci(n - 2);
		return a;
	}*/
}

int main()//test
{
	int testCase = 10;
	long long testAnswer = fibonacci(testCase);

	cout << testAnswer;
	return 0;
}