#include<iostream>
using namespace std;
main()
{
    int n1=0,n2=1,next;
int n;
cout<<"how many numbers of fibonacci series you want to print:";
cin>>n;
cout<<"fibonocci series"<<endl;
for(int num=0;num<n;num++)
{
    cout<<n1<<endl;
    next=n1+n2;
    n1=n2;
    n2=next;
    
}
}

