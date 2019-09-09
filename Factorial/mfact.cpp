#include<iostream>
using namespace std;
int dp[INT_MAX];
int fact(int N)
{
	if(N == 0)
	{
		return 1;
	}
		else if(dp[N] != -1)
		{
			return dp[N];

		}
			else
			{
				dp[N] = N*(dp[N-1] = fact(N-1));
			}
	return dp[N];
}
int main()
{
	int N, result;
	cout << "Enter the no.:";
	cin >> N;
	for(int i = 0; i <= N; i++)
	{
	    dp[i] = -1;
	}
	cout << fact(N);
}
