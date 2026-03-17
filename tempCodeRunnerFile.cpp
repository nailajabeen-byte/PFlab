#include<iostream>
using namespace std;
main(){

    float pi=3.14,base,widthr;
    int lengths,area,lengthr,radius,height;
    string figure;
    cout<<"enter a figure name"<<endl;
    cin>>figure;
    if (figure=="square"){
    cout<<"enter the lenth of square"<<endl;
    cin>>lengths;
    area=lengths*lengths;
    cout<<"area hai:"<<area<<"area"<<endl;
    }
    if (figure=="rectangle"){
    cout<<"enter the length of rectangle"<<endl;
    cin>>lengthr;
    cout<<"enter the width of rectangle"<<endl;
    cin>>widthr;
    area=lengthr*widthr;
    cout<<"area hai:"<<area<<"area"<<endl;
    }
    if (figure=="circle"){
    cout<<"enter the radius of circle"<<endl;
    cin>>radius;
    area=pi*(radius*radius);
    cout<<"area hai:"<<area<<"area"<<endl;
    }
    if(figure=="triangle"){
    cout<<"enter the base of triangle"<<endl;
    cin>>base;
    cout<<"enter the height of triangle"<<endl;
    cin>>height;
    area=0.5*(base*height);
cout<<"area hai:"<<area<<"area";
}
}




