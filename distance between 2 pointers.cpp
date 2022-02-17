#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={12,23,34,45,56};
	int *p,*q;
	p=&arr[1];
	q=&arr[4];
	int d;
	d=p-q;
	cout<<d;
}
