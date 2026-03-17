#include<iostream>
using namespace std;
main()
{
    int number;
    cout<<"enter the  postive number:";
    cin>>number;
    while(number<=0)
    {
    cout<<"error:"<<number<<"is not a postive number"<<endl;
    cout<<" ENter postive number:";
    cin>>number;
    }
    cout<<"program end"<<endl;
}
    
