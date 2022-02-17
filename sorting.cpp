#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={6,2,1,4,5};
	
	
		if(a[0]>a[1])
		{
			int temp;
			temp=a[0];
			a[0]=a[1];
			a[1]=temp;
		}
		for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
		if(a[1]>a[2])
		{
			int temp;
			temp=a[1];
			a[1]=a[2];
			a[2]=temp;
		}
		
		for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
		if(a[2]>a[3])
		{
			int temp;
			temp=a[2];
			a[2]=a[3];
			a[3]=temp;
		}
		
		for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
		if(a[3]>a[4])
		{
			int temp;
			temp=a[3];
			a[3]=a[4];
			a[4]=temp;
		}
		
		for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
	cout<<endl;
		
		
	
		
}
