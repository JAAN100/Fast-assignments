#include <iostream>
using namespace std;
void displayShape(int size, char shapeType)
{
	if (shapeType == 'S' || shapeType == 's')
	{
		for (int i = 1; i <= size && i <= 5; i++)
		{
			for (int j = i; j <= i * size ; j += i)
			{
				cout << j;
				cout<< "  ";
				if (j < 10)
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else if (shapeType == 'T' || shapeType == 't')
	{
		int** arr = new int* [size];

		for (int i = 0; i < size; i++) 
		{
			arr[i] = new int[i + 1];
		}

		for (int i = 0; i < size; i++) 
		{
			for (int j = 0; j <= i; j++) 
			{
				if (j == 0 || j == i) 
				{
					arr[i][j] = 1;
				}
				else
				{
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				}
			}
		}

		for (int i = 0; i < size; i++) 
		{
			for (int space = 0; space < size - i - 1; space++) 
			{
				cout << " ";
			}
			for (int j = 0; j <= i; j++) 
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < size; i++) {
			delete[] arr[i];
		}
		delete[] arr;
	}
}
int main()
{
	int size = 0;
	char shapeType;
	cout << "Enter the Shape you want to show on output \n";
	cin >> shapeType;
	while (shapeType != 'T' && shapeType != 't' && shapeType != 'S' && shapeType != 's')
	{
		cout << "Error ! invalud input : ";
		cout << "Enter the Shape you want to show on output \n";
		cin >> shapeType;
	}
	cout << "Enter the size of the shape \n";
	cin >> size;

	while (size < 0)
	{
		cout << "Error ! invalid input : ";
		cout << "Enter the size of the shape \n";
		cin >> size;
	}
	displayShape(size, shapeType);
	return 0;
}