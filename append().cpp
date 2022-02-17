#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	s.append(" aryan");
	cout<<s<<endl;
	cout<<s.capacity()<<endl;
	cout<<s.max_size();
}
