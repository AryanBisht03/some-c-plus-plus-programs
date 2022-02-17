#include<iostream>
using namespace std;

void Draw(int n)
{
 for(int i=0;i<5;i++)
 {
     for(int j=0;j<5;j++)
     {
         cout<<"*";
     }
     cout<<endl;
 }
    //Draw Pattern given in description for n x n dimensions
}
int main()
{
	int n=5;
	Draw(n);
}
