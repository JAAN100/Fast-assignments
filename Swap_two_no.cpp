#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "Enter the value of 'x' = ";
	cin >> x;
	cout << "Enter the value 'y' = ";
	cin >> y;
	x = x + y;
	y = x - y;
	x = x - y;
	cout << "The values are noe swaped \n ";
	cout << "x = " << x << "\ny = " << y << endl;
}