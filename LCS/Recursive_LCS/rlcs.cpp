#include<iostream>
#include<string.h>
using namespace std;
/////////Max function is to calculate the maximum of two no.//////////
int max(int a, int b)
{
	return (a > b)? a: b;
}
////////LCS function is to calulate longest common subsequence in two sequence/////////
int LCS(string x, string y, int m, int n)
{
////////Base Condition- anyone string is over then return 0////////////
	if(m == 0 || n == 0)
	{
		return 0;
	}
	else
	{
		////if element matches then add 1 and decreament the length of both strings////
		if(x[m] == y[n])
		{
			return (1 + LCS(x, y, m-1, n-1));
		}
		////if the string element not matches then decreament the length of one string keep other same and vice versa then take maximum/////////// 
		else
		{
			return (max(LCS(x, y, m-1, n), LCS(x, y, m, n - 1)));
		}
	}
}
int main()
{
	int m = 0, n = 0, Length = 0;
	string x, y;
////////Taking the input of two strings//////////////////
	cout << "Enter the first string:";
	cin >> x;
	cout << "Enter the second string:";
	cin >> y;
	
////////Calculating the length of two strings and store into the integer variables/////////////
	m = strlen(x.c_str());
	n = strlen(y.c_str());
	
	Length = LCS(x, y, m, n);
	cout << "Length of Longest Commom Subsequence is:" << Length;
}
