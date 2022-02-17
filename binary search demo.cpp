#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	int h;
	int mid;
	int arr[10]={1,2,3,4,5,8,9,10,11,13};
	l=0;
	h=9;
	mid=(l+h)/2;
	int key=10;
	if(key==arr[mid])
	cout<<"founded";
	else
	{
		l=mid+1;
		mid=(l+h)/2;
		if(key==arr[mid])
		cout<<"10 is founded at "<<mid;
	}
}
