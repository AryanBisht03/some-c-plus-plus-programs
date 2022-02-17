#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	char s1[100];
	char s2[100];
	cout<<"enter the string"<<endl;
	cin>>s1;
	cout<<"enter the string"<<endl;
	cin>>s2;
	cout<<strcmp(s1,s2);
	return 0;
}
