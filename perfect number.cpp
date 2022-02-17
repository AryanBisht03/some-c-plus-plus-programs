#include<bits/stdc++.h>
using namespace std;
void Perfect(int* n)
{
    int sum=0;
    for(int i=1;i<=(*n/2);i++)
    {
        if(*n%i==0)
        cout<<i<<" ";
        sum=sum+i;
    }
    if(sum==(*n))
    cout<<"perfect";
    else
    cout<<"not perfect";
    //write a loop to find sum of the factors of number
    //check if number is perfect or not
}
int main()
{
	int n;
	cin>>n;
	Perfect(&n);
	return 0;
}
