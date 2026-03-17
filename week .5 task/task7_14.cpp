#include<iostream>
using namespace std;
main()
{
    int num=0,sum=0;
    while( num>=0)
    {
    sum=num+sum;
    cout<<"enter a number"<<endl;
    cin>>num;
    cout<<"sum:"<<sum;
    }
}
