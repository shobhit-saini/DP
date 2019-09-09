#include<iostream>
using namespace std;
int main()
{
	int N, i;
	cout << "Enter the number:";
	cin >> N;
	int dp[N];
	dp[0] = 1;
	for(i = 1; i <= N; i++)
	{
		dp[i] = dp[i-1] * i;
	}
	cout << dp[N];
}
