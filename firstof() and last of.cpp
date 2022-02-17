#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="aryan bisht is a good boy";
    
    cout<<s.find_first_of('a')<<endl;
    cout<<s.find_last_of('a')<<endl;
    
	cout<<s.find_first_of('a',3)<<endl;
    cout<<s.find_last_of('a')<<endl;
    
    cout<<s.find_first_of('a',4)<<endl;
    cout<<s.find_last_of('a')<<endl;
    
}
