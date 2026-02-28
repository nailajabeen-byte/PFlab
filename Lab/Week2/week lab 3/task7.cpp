#include<iostream>
using namespace std;

main(){

 cout<<"enter movie name"<<endl;
string movie;
cin>>movie;
cout<<"enter adult tick"<<endl;
int tick;
cin>>tick;
cout<<"enter adult tick sold"<<endl;
int sold;
cin>>sold;
cout<<"enter child tick prize"<<endl;
int prize;
cin>>prize;
cout<<"enter child tick sold"<<endl;
int child;
cin>>child;
cout<<"enter the donated amount"<<endl;
float amount;
cin>>amount;
int ans1;
int ans2;
int ans3;
ans1=(sold*tick)+(child*prize);
ans2=amount*ans1;
ans3=ans1-ans2;

cout<<"ans is:"<<ans1<<"ans1";
cout<<"ans is:"<<ans2<<"ans2";
cout<<"ans is:"<<ans3<<"ans3";

}
