#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=1;
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
		{
			if(i<=j)
			cout<<"*";
			if(i>j)
			cout<<" ";
		}
		
		cout<<endl;
	}
}
