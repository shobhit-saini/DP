#include<iostream>
using namespace std;
int* DNF(int* ar, int i, int j)
{
	int mid = i;
	while(mid <= j)
	{
		switch(ar[mid])
		{
			case 0:
				swap(ar[mid], ar[i]);
				i++;
				mid++;
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(ar[mid], ar[j]);
				j--;	
				break;
				
		}
	}
	return ar;
}
int main()
{
	int N, i;
	cout << "Enter the size of array:";
	cin >> N;
	cout << "Enter the element:";
	int ar[N];
	for(i = 0; i < N; i++)
	{
		cin >> ar[i];
	}
	int* br = DNF(ar, 0, N-1);
	
	for(i = 0; i < N; i++)
	{
		cout << br[i] << "\t";
	}
}
