# Lab_2 Description

Task 1: What does the following code compile and run without error?
 void F1()
 void F2()
 void F3()
 void main()
 {
 F1()
 F2()
 F3()
 }
 void F1()
 {
 F3()
 }
 void F3()
 {
 F2()
 }
 void F2()
 {
 cout<<"Functions are interesting"<<endl;
 }


Task 2: What is the final value of the temp?
int ffunction(int, int);
void main()
 {
 int temp=0;
 int var1=3;
 int var2=5;
 temp= ffunction(var1, var2);
 }
 int ffunction(int x, int y)
 {
 return x+y;
 }


Task 3: Output of the following code?
 int test(int n1, int n2)
 {
 cout<<n2<<n1<<endl;
 return n2*n1;
 }
 void main()
 {
 int n1=2, n2=3,n3=4;
 n2 = test(test(n1,n3),n2);
 cout<< n1<< n3<< n2<< endl;
 }



Task 4: Output of the following code?
 void main()
 {
 void numbers(int x, int &y);
 int a, b, c;
 a=22;
 b=90;
 c=14;
 numbers(a,a);
 numbers(a,b);
 numbers(b,a);
 cout<<a<<” ”<<b<<” ”<<c<<endl;
 }
 void numbers(int x, int&y)
 {
 int b;
 x += 6;
 y +=11;
 b = 55;
 cout<<b<<” ”<<x <<” ”<<y<< endl;
 } 


Task 5: Write a program that asks the user to enter an item’s wholesale cost and its markup 
percentage. It should then display the item’s retail price.
For example:
If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s retail price is 
10.00.
If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s retail price is 
7.50.
The program should have a function named calculateRetail that receives the wholesale cost and 
the markup percentage as parameters and returns the retail price of the item.
Input Validation: Do not accept negative values for either the wholesale cost of the item or the 
markup percentage.


Task 6: Write C++ program that will ask the user to enter the width and length of a rectangle and 
then display the rectangle’s area. The program calls the following functions, which have not been 
written:  getLength: This function should ask the user to enter the rectangle’s length and then 
return that value as a double .  getWidth: This function should ask the user to enter the rectangle’s width and then return 
that value as a double .  getArea: This function should accept the rectangle’s length and width as arguments and 
return the rectangle’s area. The area is calculated by multiplying the length by the width.  displayData: This function should accept the rectangle’s length, width, and area as 
arguments and display them in an appropriate message on the screen.



Task 7: When an object is falling because of gravity, the following formula can be used to 
determine the distance the object falls in a specific time period:
d =1/2*g*t2
The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t is the amount 
of time, in seconds, that the object has been falling.
Write a function named DistanceFallen that accepts an object’s falling time (in seconds) as an 
argument. The function should return the distance, in meters, that the object has fallen during that 
time interval. Write a program that demonstrates the function by calling it in a loop that passes the 
values 1 through 10 as arguments and displays the return value.


Task 8: Write a function called displayShape that accepts size and shapetype as parameters and 
displays a square or a triangle of the required size.
So e.g. if the function is called with the following parameters:
displayShape(‘S’, 5); a square of size 5 is displayed as given
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25
displayShape(‘T’, 6); a triangle of size 6 is displayed as given
 1
 1 1
 1 2 1
 1 3 3 1
 1 4 6 4 1
 1 5 10 10 5 1
