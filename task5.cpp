#include<iostream>
using namespace std;
main(){
    float discount,payable;
    
cout<<"enter first number";
int number;
cin>>number;
if (number<=5000){
discount=number*0.05;
payable=number -discount;
cout<<"payable:"<<payable<<"payable"<<endl;

cout<<"enter first number"<<endl;
int number;
cin>>number;

if(number>5000){
discount=number*0.1;
payable=number -discount;
cout<<"payable:"<<payable<<"payable"<<endl;


}
}
}