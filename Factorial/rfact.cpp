#include<iostream>
using namespace std;
	int fact(int N)
	{
		if(N == 1 || N== 0)
			return 1;
		else
			return N*fact(N-1);
	}
	int main()
	{
		int N, result;
		cout << "Enter the no.:";
		cin >> N;
		result = fact(N);
		cout << result;
	}
