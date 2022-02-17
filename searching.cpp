#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={12,23,34,45,56,67,67};
	int n;
	cin>>n;
	for(int x:a)
	{
		if(n==x)
		cout<<"found";
		return 0;
	}
	cout<<"not found";
}
