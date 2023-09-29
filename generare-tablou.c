#include <iostream>

using namespace std;

#define MIN_N 1
#define MAX_N 19

int main()
{
	int n;

	cout << "n = "; cin >> n;

	if (n < MIN_N || n > MAX_N)
	{
		cout << "Eroare valoare n\n";
		return 1;
	}

	int a[n+1][n+1], i, j;

	for (i = 1; i <= n; i++)
	{
		a[n][i] = a[i][n] = 1;
	}

	for (i = n-1; i >= 1; i--)
	{
		for (j = n-1; j >= 1; j--)
		{
			a[i][j] = a[i][j+1] + a[i+1][j];
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}

		cout << "\n";
	}

	return 0;
}
