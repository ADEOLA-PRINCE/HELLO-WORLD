#include <iostream>
using namespace::std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	//int tableCount;
	int n;
	int m;
	cout << endl;
	//cout << "Enter the number of tables for the Matrix" << endl;
	//cin >> tableCount;
	int arr[4][4];

	for (n = 0; n < 4; n++)
	{
		cout << "For table " << n + 1 << " enter 4 elements" << endl;
		for (m = 0; m < 4; m++)
		{
			cin >> arr[n][m];
		}
	}

	cout << "Before Shuffling <<<>>>" << endl;
	for (n = 0; n < 4; n++)
	{
		for (m = 0; m < 4; m++)
		{
			cout << arr[n][m] << " ";
		}
		cout << "\n";
	}

	cout << "After Shuffling <<<<>>>" << endl;
	for (n = 0; n < 4; n++)
	{
		int curr = 0;
		int temp = 0;
		for (m = 0; m < 4; m++)
		{
			curr = arr[n][0];
			if (m == 3)
			{
				temp = arr[n][m];
				arr[n][m] = curr;
				arr[n][0] = temp;
				continue;
			}
		}
	}

	cout << endl;
	for (n = 0; n < 4; n++)
	{
		for (m = 0; m < 4; m++)
		{
			cout << arr[n][m] << " ";
		}
		cout << "\n";
	}
	return 0;
}
