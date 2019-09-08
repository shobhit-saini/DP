#include<iostream>
#include<string>
using namespace std;
string s1, s2;
int LCS(int m, int n)
{
	int a, b;
	if(m == 0 && n == 0)
		return 0;
	else
	{
		if(s1[m] == s2[n])
		{
			return (1 + LCS(m - 1, n - 1)); 
		}
			else
			{
				a = LCS(m - 1, n);
				b = LCS(m, n - 1);
				if(a > b)
					return a;
				else
					return b;
			}
	}
}
int main()
{
	cout << "Enter the first string:";
	cin >> s1;
	cout << "Enter the second string:";
	cin >> s2;
	LCS(strlen(s1.c_str()), strlen(s2.c_str()));
return 0;
}
