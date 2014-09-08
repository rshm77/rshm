//this programs calculates the sum of two integer numbers

#include <iostream>
using namespace std;

//variable declaration
	int num1, num2, sum;

int main()
{	
	cout<<"Enter 1st number: ";
	cin>> num1;
	cout<<"\nEnter 2nd number: ";
	cin>>num2;
	sum = num1 + num2;
	cout<<"\n\tThe Summary is " << sum<< "\n";
	return 0;
}
