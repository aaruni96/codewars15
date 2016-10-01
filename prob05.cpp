#include<iostream>
#include<cmath>

using namespace std;

float sa(int);
float vol(int);

int main()
{
	int input;
	cin>>input;
	cout<<"Surface Are: "<<sa(input)<<" square units."<<endl<<"Volume: "<<vol(input)<<" cubic units.";
	return 0;
}

float sa(int input)
{
	float s=(input+input+input)/2.0;
	return 2*(4.0/2*sqrt(s*(s-input)*(s-input)*(s-input)));
}

float vol(int input)
{
	float h=sqrt(2.0/3*input*input);
	return (1.0/3*1.0/4*sa(input)*h);
}
