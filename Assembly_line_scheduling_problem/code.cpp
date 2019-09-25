#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, i;
	cout << "Enter the no. of stations:";
	cin >> n;
	vector<vector<int>> processing (2, vector<int>(n));
	vector<vector<int>> transfer (2, vector<int>(n - 1));//n-1 because for last station it is not required 
	int Entry[2];
	int Exit[2];
	/////////////Input processing time//////////////////
	cout << "Enter the processing time of Each station of assembly line 1:\n";
	for(i = 0; i < n; i++)
	{
	    cin >> processing[0][i]; 
	}
	
	cout << "Enter the processing time of Each station of assembly line 2:\n";
	for(i = 0; i < n; i++)
	{
	    cin >> processing[1][i]; 
	}
	
	//////////////Input Transfer time//////////////////
	cout << "Enter the Transfer time of Each station from assembly line 1 to assembly line 2:\n";
	for(i = 0; i < n-1; i++)
	{
	    cin >> transfer[0][i]; 
	}
	
	cout << "Enter the Transfer time of Each station from assembly line 2 to assembly line 1:\n";
	for(i = 0; i < n-1; i++)
	{
	    cin >> transfer[1][i]; 
	}
	
	///////////////Input the Entry time of each assembly line/////////////////
	cout << "Enter the entry time of assembly line 1:\n";
	cin >> Entry[0];
	
	cout << "Enter the entry time of assembly line 2:\n";
	cin >> Entry[1];
	
	///////////////Input the Exit time of each assembly line//////////////////
	cout << "Enter the Exit time of assembly line 1:\n";
	cin >> Entry[0];
	
	cout << "Enter the Exit time of assembly line 2:\n";
	cin >> Entry[1];
	
	vector<vector<int>>lookup(2, vector<int>(n+1)); //n+1 for adding exit time of respective assembly line
	lookup[0][0] = Entry[0] + processing[0][0];
	lookup[1][0] = Entry[1] + processing[1][0];
	
	for(i = 1; i < n; i++)
	{
	    lookup[0][i] = min(lookup[0][i-1], lookup[1][i-1] + transfer[1][i-1]) + processing[0][i];
	    
	    lookup[1][i] = min(lookup[1][i-1], lookup[0][i-1] + transfer[0][i-1]) + processing[0][i];
	}
	
	lookup[0][n] = lookup[0][n-1] + Exit[0];
	lookup[1][n] = lookup[1][n-1] + Exit[1];
	cout << "Minimum Time: "<< min(lookup[0][n], lookup[1][n]);
}
