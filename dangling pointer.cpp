#include<bits/stdc++.h>
using namespace std;
void fun(int *q)
{
	cout<<endl;
	cout<<"fun fuction"<<endl;
	cout<<q[0]<<endl;
	cout<<q[1]<<endl;
	cout<<q[2]<<endl;
	cout<<q[3]<<endl;
	cout<<q[4]<<endl;
	
	delete []q;
}
int main()
{
	int *p=new int[5] {12,23,34,45,56};
	cout<<p[0]<<endl;
	cout<<p[1]<<endl;
	cout<<p[2]<<endl;
	cout<<p[3]<<endl;
	cout<<p[4]<<endl;
	fun(p);
	cout<<"dangling pointer"<<endl;
	cout<<p[0]<<endl;
	cout<<p[1]<<endl;
	cout<<p[2]<<endl;
	cout<<p[3]<<endl;
	cout<<p[4]<<endl;
}


