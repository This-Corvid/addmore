#include<iostream>
using namespace std;

int main()
{
	 //declare variables
	 int num1, num2, sum, diff, prod, quot;
	 /*
	 can also be written: 
	 int num1;
	 int num2;
	 int sum;
	 however its best to put variables of the same data type on the same line
	 */ 
	 
	 // get inputs
	 cout << "  Enter one number  " << endl;
	 cin >> num1;
	 cout << endl;
	 
	 cout << "  Enter another number  " << endl;
	 cin >> num2;
	 
	 // process
	 sum = num1 + num2;
	 diff = num1 - num2;
	 prod = num1 * num2;
	 quot = num1 / num2;
	 
	// output
	cout << "The sum is:  " << sum << endl;
	cout << "The difference is:  " << diff << endl;
	cout << "The product is:  " << prod << endl;
	cout << "The quotient is:  " << quot <<  endl;
}