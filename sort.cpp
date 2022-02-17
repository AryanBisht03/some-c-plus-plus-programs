#include<bits/stdc++.h>
#define max 50
using namespace std;
int main()
{
	int arr[max];
	int n;
	cout<<"enter the number of elements you want to enter"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"elements of the arrays are "<<" ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int j=0;j<n-1;j++)
	{
	
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			int temp;
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			
		}
		
	}
	
}
for(int i=0;i<n;i++)
{
	cout<<endl<<arr[i]<<" ";
}

}
