#include <iostream>
#include <set>

using namespace std;

int main()
{
	multiset<int> store;
	int arr[20][20];
	int h, w, sum = 0;
	int squareSize, targetSum;
	cin >> h >> w;

	for (size_t i = 0; i < h; i++)
	{
		for (size_t j = 0; j < w; j++)
		{
			cin >> arr[i][j];
		}
	}

	cin >> squareSize >> targetSum;

	for (size_t i = 0; i <= h - squareSize; i++)
	{
		for (size_t j = 0; j <= w - squareSize; j++)
		{
			//cout << arr[i][j] << " " << endl;

			for (size_t k = 0; k < squareSize; k++)
			{
				for (size_t t = 0; t < squareSize; t++)
				{
					sum += arr[i + k][j + t];
				}
			}
			if (sum >= targetSum)
			{
				store.insert(sum / (squareSize * squareSize));
				//cout << sum / (squareSize * squareSize) << " ";
			}
			sum = 0;
		}
	}

	for (auto item : store)
	{
		cout << item << " ";
	}

	return 0;
}