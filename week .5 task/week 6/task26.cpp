#include<iostream>
using namespace std;


 int main(){
    int q,d,n,p,bill,due;
    cout<<"enter the amount of quarter"<<endl;
    cin>>q;
     cout<<"enter the amount of dime"<<endl;
    cin>>d;
     cout<<"enter the amount of nickel"<<endl;
    cin>>n;
     cout<<"enter the amount of penny"<<endl;
    cin>>q;
bill=(q*0.25)+(d*0.10)+(n*0.05)+(q*0.01);
cout<<"bill is"<<bill<<endl;
cout<<"due bill"<<endl;
cin >>due;
 cout<<"are you able to pay the bill"<<endl;
 if (bill>=due){
    cout<<"yes"<<endl;
 }else{
    cout<<"no"<<endl;
 }
}