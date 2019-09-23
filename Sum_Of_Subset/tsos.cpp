#include<iostream>
using namespace std;
int main()
{
	int N, i, sum = 0, j;
	cout << "Enter the size of an sequence:\n";
	cin >> N;
	cout << "Enter the sequence:\n";
	int ar[N];
	for(i = 0; i < N; i++)
	{
		cin >> ar[i];
	}
	
	cout << "Enter the sum:";
	cin >> sum;
	
	int lookup[N+1][sum+1];
	for(i = 0; i <= N; i++)
	{
		for(j = 0; j <= sum; j++)
		{
			lookup[i][j] = 0;
		}
	}

	for(i = 0; i <= N; i++)
	{
		lookup[i][0] = 1;
	}
			
	for(i = 1; i <= N; i++)
	{
		for(j = 1; j <= sum; j++)
		{
			if(ar[i-1] > j)
			{
				lookup[i][j] = lookup[i-1][j];
			}
			if(j >= ar[i-1])
			{
				lookup[i][j] = lookup[i-1][j] || lookup[i-1][j - ar[i-1]];
			}
		}
	}

	i = N; j = sum;
	
	if(lookup[i][j] == 0)
	{
		return 0;
	}
	
	while(i >= 0)
	{
		
		if(lookup[i-1][j])
		{
			i = i-1;
		}
		else if(lookup[i-1][j-ar[i-1]])
		{
			cout << ar[i-1]<<"\t";
			j = j-ar[i-1];
			i = i-1;		 
		}
	}
}
