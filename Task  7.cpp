#include <iostream>
using namespace std;
double distanceFallen(double t)
{
	double g = 9.8;
	double d = 0;
	d = (1.0 / 2.0) * g * (t * 2);
	return d;
}
int main()
{
	double d = 0 ,  t = 0;
	for (int i = 1; i <= 10; i++)
	{

		cout << "Enter the time 't' of falling object in seconds = ";
		cin >> t;
		while (t < 0 )
		{
			cout << "Error ! invalid input :";
			cout << "Enter the time 't' of falling object in seconds = ";
			cin >> t;
		}
		d = distanceFallen(t);
		cout << "The distance of the falling object is = " << d << endl;
	}
	return 0;
}