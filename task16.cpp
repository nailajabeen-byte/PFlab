#include<iostream>
using namespace std;
main(){
int discount,final ;
    cout<<"enter country name"<<endl;
    string country_name;
    cin>>country_name;
    cout<<"enter ticket price"<<endl;
    int price;
    cin>>price;
    if(country_name=="ireland"){
    discount= price*0.10;
    final=price-discount;
    cout<<"asani hai:"<<final;
    }
    else{
    discount=0.05*price;
    final=price-discount;
    
    cout<<"asani hai:"<<final;
    }
}
