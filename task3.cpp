#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i < num; i++)
	{
		int sum = 0;
		for (int j = 0; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			cout << sum << "-";
			for (int k = 2; k <= sum; k++)
{
				for (int h = 2; h <= k; h++)
				{
					if (k % h != 0)
					{
						cout << k << ", ";
					}
				}
			}
			cout << endl;
		}
	}

	return 0;
}
