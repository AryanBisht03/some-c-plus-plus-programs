#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={12,23,34,45,56};
	for(auto &x:a)
	cout<<++x<<endl;
	for(int x:a)
	cout<<x<<endl;
	return 0;
}
