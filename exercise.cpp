#include<iostream>
using namespace std;

int main()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    int *q;
    q=p;
    // move pointer to next location to print 4
    p++;
    cout<<*p;
    
    p=p+3; // pointer will be pointing on 10
    
    cout<<q[0];    // complete this statement to print 2 without moving pointer
}

