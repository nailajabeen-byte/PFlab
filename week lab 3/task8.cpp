#include<iostream>
using namespace std;

main(){

 cout<<"enter veg price"<<endl;
float veg;
cin>>veg;
cout<<"enter total kg of vege"<<endl;
float kg1;
cin>>kg1;
cout<<"enter fruit price"<<endl;
float fruit;
cin>>fruit;
cout<<"enter total kg of fruit"<<endl;
float kg2;
cin>>kg2;
cout<<"enter the coin rate"<<endl;
float coin;
cin>>coin;

int ans1;


ans1=(veg/coin)*kg1+(fruit/coin)*kg2;



cout<<"ans is:"<<ans1<<"ans1";


}
