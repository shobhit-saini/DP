#include<iostream>
#include<string.h>
using namespace std;
/////////Max function is to calculate the maximum of two no.//////////
int max(int a, int b)
{
	return (a > b)? a: b;
}

int main()
{

	int m = 0, n = 0, i, j;
	string x, y;
	
////////Taking the input of two strings//////////////////	
	cout << "Enter the first string:";
	cin >> x;
	cout << "Enter the second string:";
	cin >> y;

////////Calculating the length of two strings and store into the integer variables/////////////	
	m = strlen(x.c_str());
	n = strlen(y.c_str());

////////Declare the Table with one dimension extra/////////////////////////	
	int lookup[m+1][n+1];
	
	for(i = 0; i <= m; i++)
	{
		for(j = 0; j <= n; j++)
		{
	
			if(i == 0 || j == 0)
			{
				lookup[i][j] = 0;
			}
			
				else if(x[i-1] == y[j-1])
				{
					lookup[i][j] = lookup[i-1][j-1] + 1;
				}
				
					else
					{
						lookup[i][j] = max(lookup[i-1][j], lookup[i][j]);
					}
		}
	}
	cout << "Length of Longest Commom Subsequence is:" << lookup[m][n];
}
