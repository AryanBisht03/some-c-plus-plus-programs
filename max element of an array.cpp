#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={12,23,34,45,56,345};
	int max=a[0];
	for(int x:a)
	{
		if(x>max)
		max=x;
	}
	cout<<"the max element of the array is "<<max;
	return 0;
}
