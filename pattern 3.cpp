#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=1;
	for(int i=1;i<=30;i++)
	{
		for(int j=1;j<=30;j++)
		{
			if((i+j)>30)
			cout<<"*";
			else
			cout<<" ";
		}
		
		cout<<endl;
	}
}
