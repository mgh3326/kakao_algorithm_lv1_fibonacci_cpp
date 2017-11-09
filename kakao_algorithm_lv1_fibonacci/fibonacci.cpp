#include<iostream>
using namespace std;
int memo[50];
long long fibonacci(int n)//메모이제이션
{//메모이제이션을 추가한 방법의 시간 복잡도는 O(N)입니다.
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
이 방법은 재귀 호출을 이용한 방법입니다. 시간 복잡도는 대략 O(2N) 정도가 나오게 됩니다. 
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