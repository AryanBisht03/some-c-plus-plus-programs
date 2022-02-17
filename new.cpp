#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=0;i<10;i++)
	{
		cout<<i<<endl;
	}
	cout<<i;//this will give an error since the scope of i is over;
}
