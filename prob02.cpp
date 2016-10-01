#include<iostream>

using namespace std;

int ftoc(int);

int main()
{
	int f;
	cin>>f;
	cout<<ftoc(f);
	return 0;
}

int ftoc(int f)
{
	return (5.0/9)*(f-32);
}
