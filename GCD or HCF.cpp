#include<bits/stdc++.h>
using namespace std;
void GCD(int *a,int *b)
{
	while((*a)!=(*b))
	{
		if(*a>*b)
		*a=*a-*b;
		else
		*b=*b-*a;
	}
	cout<<"greatest common devisor is "<<*a;
}
int main()
{
	int num1;
	int num2;
	cin>>num1>>num2;
	GCD(&num1,&num2);
	return 0;
}
