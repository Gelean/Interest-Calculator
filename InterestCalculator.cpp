#include <iostream>
#include <cmath>
using namespace std;

void main()
{

	float deposit = 0.0;
	float rate = 0.0;
	float compound = 0.0;
	float years = 0.0;

	cout<<"Enter the initial deposit: ";
	cin>>deposit;
	cout<<"Enter the annual interest rate percent: ";
	cin>>rate;
	cout<<"Enter the number of times the compounding is done per year: ";
	cin>>compound;
	cout<<"Enter the number of years the deposit will be left to build interest: ";
	cin>>years;
	//(rate/100) Takes the rate and converts it from a percent to a fraction
	float accum = (1+((rate/100)/compound));
	float exponent = years*compound;
	cout<<"The accumulation after "<<years<<" years is: "<<deposit*pow(accum,exponent)<<endl;

}