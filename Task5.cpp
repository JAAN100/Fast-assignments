#include<iostream>
using namespace std;
double calculateRetail(double wholeSaleCost, double markUpPrice)
{
	double retailPrice = 0;
	retailPrice = wholeSaleCost + markUpPrice;
	return retailPrice;
}
int main()
{
	double wholeSaleCost, markUpPrice, retailPrice;
	cout << "Enter the wholesale Cost = ";
	cin >> wholeSaleCost;
	cout << "Enter the markup percentage % = ";
	cin >> markUpPrice;
	while (wholeSaleCost < 0 || markUpPrice < 0)
	{
		cout << "Error ! invalid input : ";
		if (markUpPrice < 0)
		{
			cout << "Enter the markup percentage % = ";
			cin >> markUpPrice;
		}
		if (wholeSaleCost < 0)
		{
			cout << "Enter the wholesale Cost = ";
			cin >> wholeSaleCost;
		}
	}
	markUpPrice = wholeSaleCost * (markUpPrice / 100);
	retailPrice = calculateRetail(wholeSaleCost, markUpPrice);
	cout << "The retail price of your product is = " << retailPrice << endl;
	return 0;
}