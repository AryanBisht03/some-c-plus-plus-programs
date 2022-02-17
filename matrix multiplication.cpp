#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	int j;
	int m;
	int n;
	int a[i][j];
	int b[m][n];
	cout<<"enter the number of rows in matrix a"<<endl;
	cin>>i;
	cout<<"enter the number of columns in matrix a"<<endl;
	cin>>j;
	cout<<"enter the number of rows in matrix b"<<endl;
	cin>>m;
	cout<<"enter the number of columns in matrix b"<<endl;
	cin>>n;
	if(j!=m)
	cout<<"matrix multiplication is not possible"<<endl;
	else
	{
		cout<<"enter the elements of matrix a"<<endl;
		for(int x=0;x<i;x++)
		{
			for(int y=0;y<j;y++)
			{
				cin>>a[x][y];
			}
		}
		for(int x=0;x<i;x++)
		{
			for(int y=0;y<j;y++)
			{
				cout<<a[x][y]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		cout<<"enter the values of matrix b"<<endl;
		for(int x=0;x<m;x++)
		{
			for(int y=0;y<n;y++)
			{
				cin>>b[x][y];
			}
		}
		for(int x=0;x<m;x++)
		{
			for(int y=0;y<n;y++)
			{
				cout<<b[x][y]<<" ";
			}
			cout<<endl;
		}
		
	}
	
}
