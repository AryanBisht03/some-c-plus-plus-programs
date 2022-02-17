#include<bits/stdc++.h>
using namespace std;
void leap(int *);
int main()
{
	int year;
	cin>>year;
	leap(&year);
	return 0;
}

void leap(int *y)
{
	switch(*y%4==0&&(*y%100!=0)||(*y%400==0))
	{
		case 1:
			cout<<"leap year";
			break;
		case 0:
			cout<<"ordinary year";
			break;
	}
}
