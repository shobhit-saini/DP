#include<iostream>
using namespace std;
int min(int a, int b, int c)
{
	return a < b ? (a < c ? a : c) : (b < c ? b : c);
}
int main()
{
	int N, multiple_2, multiple_3, multiple_5, next_ugly, i;
	cout << "Enter the no.:";
	cin >> N;
	int ugly[N];
	ugly[0] = 1;
	int i2 = 0, i3 = 0, i5 = 0;
	multiple_2 = 2*ugly[i2];
	multiple_3 = 3*ugly[i3];
	multiple_5 = 5*ugly[i5];
	for(i = 1; i < N; i++)
	{
		next_ugly = min (multiple_2, multiple_3, multiple_5);
		ugly[i] = next_ugly;
		if(multiple_2 == next_ugly)
		{
			i2++;
			multiple_2 = ugly[i2]*2;
		}
		if(multiple_3 == next_ugly)
		{
			i3++;
			multiple_3 = ugly[i3]*3;
		}
		if(multiple_5 == next_ugly)
		{
			i5++;
			multiple_5 = ugly[i5]*5;
		}
		
	}
	cout << N << "ugly no. is:" <<ugly[N - 1];
	
}
