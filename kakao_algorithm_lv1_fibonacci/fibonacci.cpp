#include<iostream>
using namespace std;

long long fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
	{
		long long a = fibonacci(n - 1) + fibonacci(n - 2);
		return a;
	}
}

int main()
{
	int testCase = 10;
	long long testAnswer = fibonacci(testCase);

	cout << testAnswer;
	return 0;
}