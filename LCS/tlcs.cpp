#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s1, s2;
	int len_s1, len_s2, i, j;
	cout << "Enter the First string:";
	cin >> s1;
	cout << "Enter the second string:";
	cin >> s2;
	len_s1 = strlen(s1.c_str());
	len_s2 = strlen(s2.c_str());
	int ar[len_s1][len_s2];
	for(i = 0; i <= len_s1; i++)
	{
		for(j = 0; j <= len_s2; j++)
		{
			if(i == 0 || j == 0)
			{
				ar[i][j] = 0;
			}
			else if(s1[i] == s2[j])
			{
				ar[i][j] = 1 + ar[i -1][j - 1];
			}
			else
			{
				ar[i][j] = (ar[i - 1][j] > ar[i][j - 1]) ? ar[i - 1][j] : ar[i][j - 1];
			}
		}
	}
	cout << ar[len_s1][len_s2];
}
