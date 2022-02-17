#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s1[100];
	char s2[100];
	cin>>s1>>s2;
	long int x=strtol(s1,NULL,16);
	float y=strtof(s2,NULL);
	cout<<x+10<<endl<<y+5<<endl;
}
