#include <iostream>
using namespace std;
double getWidth(double);
double getLength(double);
double getArea(double , double);
void displayData(double, double, double);
int main()
{
	double area = 0 , length = 0, width = 0;
	width = getWidth(width);
	length = getLength(length);
	area = getArea(width ,length);
	displayData(area, width, length);
}

//Input width
double getWidth(double width)
{
	cout << "Enter the width of the rectangle = ";
	cin >> width;
	return width;
}

//Input length
double getLength(double length)
{
	cout << "Enter the length of the rectangle = ";
	cin >> length;
	return length;
}


// calculate area
double getArea(double width, double length)
{
	double area = 0;
	area = length * width;
	return area;
}


//display Data
void displayData(double area, double width, double length)
{
	cout << "The width of the rectangle is  = " << width << endl;
	cout << "The length of the rectangle is  = " << length <<endl;
	cout << "The area of the reactangle is = " << area <<endl;
}