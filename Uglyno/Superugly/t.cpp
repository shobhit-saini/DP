#include<iostream>
using namespace std;
struct array
{
	int data;
	int counter;
	int next_multiple;
};

int min(struct array *ar, int k)
{
	int i;
	int min = ar[0].next_multiple;
	for(i = 1; i < k; i++)
	{
		if(ar[i].next_multiple < min)
		{
			min = ar[i].next_multiple;
		}
	}
	return min;
}

int main()
{
	int N, multiple_2, multiple_3, multiple_5, next_ugly, i, k, j ;
	cout << "Enter the no.:";
	cin >> N;
	cout << "Enter the no. of prime factors:";
	cin >> k;
	struct array ar[k];
	cout << "Enter the prime factors:";
	for(i = 0; i < k; i++)
	{
		cin >> ar[i].data;
		ar[i].counter = 0;
		ar[i].next_multiple = ar[i].data;
	}
	int ugly[N];
	ugly[0] = 1;
	for(j = 1; j < N; j++)
	{
		next_ugly = min (ar, k);
		ugly[j] = next_ugly;
		for(i = 0; i < k; i++)
		{
			if(next_ugly == ar[i].next_multiple)
			{
				ar[i].counter++;
				ar[i].next_multiple = ugly[ar[i].counter] * ar[i].data;
			}
		}
		
	}
	cout << N << "ugly no. is:" <<ugly[N-1];
}
