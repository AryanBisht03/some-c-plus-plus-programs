#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,2,4,5,6,9,10};
	int *p;
	p=a;
	cout<<p[0]<<endl;
	
	cout<<p[1]<<endl;
	
	cout<<p[2]<<endl;
	
	cout<<p[3]<<endl;
	
	cout<<p[4]<<endl;
	
	cout<<p[5]<<endl;
	
	cout<<p[6]<<endl;

	cout<<p[0]<<endl;
	p++;
	cout<<"after incrementing"<<endl;
	cout<<p[0]<<endl;
	cout<<p[1]<<endl;
	cout<<p[2]<<endl;
	cout<<p[3]<<endl;
	cout<<p[4]<<endl;
	cout<<p[5]<<endl;
	cout<<p[6]<<endl;
	cout<<p[7]<<endl;
	p=p+3;
	
	cout<<"after incrementing"<<endl;
	cout<<p[0]<<endl;
	cout<<p[1]<<endl;
	cout<<p[2]<<endl;
	cout<<p[3]<<endl;
	cout<<p[4]<<endl;
	
	cout<<"to print the older values "<<endl;
	cout<<p[0]<<endl;
	cout<<p[-1]<<endl;
	cout<<p[-2]<<endl;
	cout<<p[-3]<<endl;
	cout<<p[-4]<<endl;
	cout<<p[-5]<<endl;
	cout<<p[-6]<<endl;
	cout<<p[-7]<<endl;
	cout<<p[-8]<<endl;
	cout<<p[-9]<<endl;
	
}
