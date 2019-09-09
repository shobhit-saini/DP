#include<iostream>
using namespace std;
int fib(int N)
{
	if(N == 0 || N == 1)
		return N;
		else
		{
			return fib(N-1) + fib(N-2);
		}
}
int main()
{
	int N;
	cout << "Enter the no.:";
	cin >> N;
	cout << fib(N);
}
