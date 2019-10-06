#include<iostream>
using namespace std;
	int fib(int n, int* lookup)
	{
		if(lookup[n] == -1)
		{
			if(n == 0 || n == 1)
			{
				lookup[n] = n;
			}
			else
			{	
				lookup[n] = fib(n-1, lookup) + fib(n-2, lookup);
			}
		}
		return lookup[n];
	}

int main()
{
	int n = 0, i = 0, res = 0;
	cout << "Enter the no.:";
	cin >> n;
	int lookup[n+1];
	for(i =0; i <= n; i++)
	{
		lookup[i] = -1;
	}
	i = n;
	res = fib(n, lookup);
	cout <<res ;
}
