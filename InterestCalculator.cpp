#include <iostream>
#include <cmath>
using namespace std;

void main()
{
	float principal = 0.0, rate = 0.0, compound = 0.0, years = 0.0, accum = 0.0, exponent = 0.0, totalAccum = 0.0;

	cout<<"Enter the principal amount: ";
	cin>>principal;
	cout<<"Enter the annual interest rate percent: ";
	cin>>rate;
	cout<<"Enter the number of times the compounding occurs per year: ";
	cin>>compound;
	cout<<"Enter the number of years the principal will be left to build interest: ";
	cin>>years;
	
	accum = (1 + ((rate / 100) / compound));
	exponent = years * compound;
	totalAccum = principal * pow(accum,exponent);
	
	cout<<"The accumulation after "<<years<<" years is: "<<totalAccum<<endl;
}