#include<iostream>

using namespace std;

int main()
{
	int n;
	float sum=0,sumsq=0,z;
	cin>>n;
	int s=n;
	float ar[s];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		sum+=ar[i];
		sumsq+=(ar[i]*ar[i]);
	}
	z=(sum*sum)-sumsq;
	cout<<z;
	return 0;
}
