#include<bits/stdc++.h>
#define max 50
using namespace std;
int main()
{
	int l=0;
	int mid;
	int key;
	int n;
	int arr[max];
	cout<<"enter the number of elements you want in your array"<<endl;
	cin>>n;
	int h=n;
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the number which you want to search"<<endl;
	cin>>key;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==arr[mid])
		{
			cout<<"founded at "<<mid+1;
			return 0;
		}
		else if(key<arr[mid])
		{
			h=mid-1;
		}
		else
		l=mid-1;
	}
	cout<<"element not founded"<<endl;
}
