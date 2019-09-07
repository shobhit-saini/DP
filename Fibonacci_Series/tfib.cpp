#include<iostream>
using namespace std;
int main()
{
	int n, i = 0; 
	cout << "Enter the no.:";
	cin >> n;
	int lookup[n];
	lookup[0] = 0;
	lookup[1] = 1;
	for(i = 2; i < n; i++)
	{
		lookup[i] = lookup[i-1] + lookup[i-2];
	}
	cout << lookup[n-1];
}
