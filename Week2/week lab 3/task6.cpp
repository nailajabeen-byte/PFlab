#include<iostream>
using namespace std;

main(){

 cout<<"enter the size of fertilizer bag "<<endl;
int fer;
cin>>fer;
cout<<"enter the cost of the bag"<<endl;
int bag;
cin>>bag;

cout<<"enter the area in square feet"<<endl;
int square;
cin>>square;
int ans1;
int ans2;
ans1=bag/fer;
ans2=(fer*ans1)/square;
cout<<"ans is:"<<ans1<<"ans1";
cout<<"ans is:"<<ans2<<"ans2";


}
