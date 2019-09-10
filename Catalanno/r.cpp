#include<iostream>
using namespace std;
int catalan(int i)
{
	int j, res = 0;
	if(i == 0)
		return 1;
	else
	{
		for(j = 0; j < i; j++)
		{
			res += catalan(j) * catalan(i - j - 1);
		}
	}
	return res;
}
int main()
{
	int N, i;
	cout << "Enter the no. upto which you want to print catalan no.:";
	cin >> N;
	for(i = 0; i < N; i++)
	{
		cout << catalan(i) << "\t";
	}
}
