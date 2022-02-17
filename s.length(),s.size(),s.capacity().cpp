#include<string>
#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	cout<<s<<endl;
	cout<<s.size()<<endl;
	cout<<s.length()<<endl;
	s.resize(6);
	cout<<s.capacity()<<endl;
}
