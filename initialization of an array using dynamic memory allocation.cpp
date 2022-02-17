#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *p;
	p=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	delete []p;
	cin>>n;
	p=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	
	
}
