#include<bits/stdc++.h>
#define max 50
using namespace std;
int main()
{
	int a[max];
	int n;
	float avg;
	int sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	avg=sum/n;
	cout<<"the avg is "<<avg;
	
}

