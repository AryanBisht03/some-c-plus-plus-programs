#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1="aryan";
	string::reverse_iterator it;
	for(it=s1.rbegin();it!=s1.rend();it++)
	{
		cout<<*it<<endl;
	}
}
