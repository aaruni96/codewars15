//this program assumes only 12 data points
//to do, read up on how to terminate an input stream

#include<iostream>

using namespace std;

int main()
{
	const int n=12; //number of input data
	int counter=0;
	int data[n];
	for (int i=0;i<n;i++)
	{
		cin>>data[i];
	}
	for(int i=1;i<n-1;i++)
	{
		if(data[i]>data[i-1] && data[i]>data[i+1])
		{
			cout<<data[i]<<' ';
			counter+=1;
		}
	}
	cout<<endl<<counter;
	return 0;
}
