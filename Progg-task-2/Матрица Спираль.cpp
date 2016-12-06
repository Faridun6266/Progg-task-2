#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n > 10) return(0);


	int Arr[100][100];
	int i = 0, j, k = 0, p = 1;

	while (i < n*n)
	{
		k++;
		for (j = k - 1; j<n - k + 1; j++)
		{
			Arr[k - 1][j] = p++;
			i++;
		}

		for (j = k; j<n - k + 1; j++)
		{
			Arr[j][n - k] = p++;
			i++;
		}

		for (j = n - k - 1; j >= k - 1; j--)
		{
			Arr[n - k][j] = p++;
			i++;
		}

		for (j = n - k - 1; j >= k; j--)
		{
			Arr[j][k - 1] = p++;
			i++;
		}

	}

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cout << setw(4) << Arr[i][j];
		};
		cout << endl;
	}
	system("pause");
	return(0);
}