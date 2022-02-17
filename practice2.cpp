////#include<bits/stdc++.h>
////using namespace std;
////enum months{jan=1,feb,march,apr,may,june,july,aug,sep,octo,nov,deco};
////int main()
////{
////	months m;
////	m=jan;
////	cout<<m<<endl;
////	m=may;
////	cout<<m<<endl;
////	m=octo;
////	cout<<m<<endl;
////	m=june;
////	cout<<m<<endl;
////	return 0;
////}
//#include<iostream>
//using namespace std;
//
//void Working(int hour)
//{
// 
// if(hour>=9&&hour<=18)
// cout<<"working";
// else 
// cout<<"leisure";
//
//}
//int main()
//{
//	int n;
//	cin>>n;
//	Working(n);
//	return 0;
//}
#include<iostream>
using namespace std;

void Discount(float amount)
{
    float disamount;
    float net;
    if(amount>=500)
    {
        disamount=(20.0/100.0)*amount;
        net=amount-disamount;
        cout<<net;
    }
    else if(amount>=2000&&amount<5000)
    {
        disamount=(10.0/100.0)*amount;
        net=amount-disamount;
        cout<<net;
    }
    else if(amount<2000)
    {
        disamount=(5.0/100.0)*amount;
        net=amount-disamount;
        cout<<net;
    }
}
int main()
{
	float amount;
	cin>>amount;
	Discount(amount);
	return 0;
}
