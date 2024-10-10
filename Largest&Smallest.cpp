#include <iostream>
using namespace std;
int main()
{
	int smallest, largest;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the " << i+1 << " number = ";
		cin >> arr[i];
	}
	largest = arr[0];
	smallest = arr[0];
		 for (int i = 0; i < 5; i++)
		 {
			 if (largest < arr[i])
			 {
				 largest = arr[i];
			 }
			 if (smallest > arr[i])
			 {
				 smallest = arr[i];
			 }
		 }
		 cout << "The largest number is = " << largest <<endl;
		 cout << "The smallest number is = " << smallest;
}