#include <iostream>
using namespace std;
int main()
{
	cout << " Q # 1 :\n\n\n";
	int j = 1;
	for (int i = 1; i <= 3; i++)
	{
		for (int space = 3; space > i; space--)
		{
			cout << " ";
		}
		for (int k = 1; k <= j; k++)
		{
			cout << "*";
		}
		j += 2;
		cout << endl;
	}
	j -= 4;
	for (int i = 3; i > 1; i--)
	{
		for (int space = i; space <= 3; space++)
		{
			cout << " ";
		}
		for (int k = 1; k <= j; k++)
		{
			cout << "*";
		}
		j -= 2;
		cout << "\n";
	}


	cout << "\n\n\n Q # 2 : \n\n\n";
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i == 1 && j <= 10 || i == 5 && j <= 10 || i <= 5 && j == 1 || i <= 5 && j == 10)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "\n\n\n Q # 3 : \n\n\n";
	for (int i = 1; i <= 5; i++)
	{
		if (i % 2 == 1)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n\n\n Q # 4 : \n\n\n";
	for (int i = 1; i <= 5; i++)
	{
		for (int space = 3; space >= i; space--)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "\n\n\n Q # 5 : \n\n\n";
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n\n\n Q # 6 : \n\n\n";
	for (int i = 5; i >= 1; i--)
	{
		for (int space = 4; space >= i; space--)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

}