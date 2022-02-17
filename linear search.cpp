#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={12,23,34,45,56,67,67};
	int n;
	cin>>n;
	for(int x=0;x<7;x++)
	{
		if(n==a[x])
		cout<<"found at "<<x+1<<endl;
		return 0;
	}
	cout<<"not found";
}
