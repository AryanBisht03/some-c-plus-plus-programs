#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s1[]="x=12;y=45;z=455;a=11;b=22;c=33";
	char *c=strtok(s1,"=;x");
	while(c!=NULL)
	{
	
	cout<<c<<endl;
    c=strtok(NULL,"=;x");
}
}
