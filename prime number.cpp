//#include<bits/stdc++.h>
//using namespace std;
//void Prime(int n)
//{ 
//    int count=0;
//    for(int i=0;i<=n;i++)
//    {
//        if(n%i==0)
//        count++;
//    }
//    if(count==2)
//    cout<<"prime";
//    else
//    cout<<"not prime";
//    //Wrote a lopp to count factors
//    //check if number is prime
//}
//int main()
//{
//	int n;
//	cin>>n;
//	Prime(n);
//	return 0;
//}
#include<iostream>
using namespace std;

void Digits(int n)
{
    int digit;
    while(n>0)
    {
    digit=n%10;
    cout<<digit<<" ";
    n=n/10;
    }
    //display digits in reverse, seperated by space
}
int main()
{
	int n;
	cin>>n;
	Digits(n);
	return 0;
}
