#include <iostream>
using namespace std;
int main()
{
	int num[] = {1 , 2, 3};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << num[i] << num[j] << num[k] << endl;
			}
		}

	}
}