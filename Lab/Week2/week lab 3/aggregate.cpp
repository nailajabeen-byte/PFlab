#include<iostream>
using namespace std;

main(){

 cout<<"enter name"<<endl;
string name;
cin>>name;
cout<<"enter mat"<<endl;
float mat;
cin>>mat;
cout<<"enter inter"<<endl;
float inter;
cin>>inter;
cout<<"enter ecat"<<endl;
float ecat;
cin>>ecat;
float aggregate;
aggregate=(mat/1100*10)+(inter/1100*40)+(ecat/400*50);
cout<<" aggregate is:" <<aggregate<<"%";


}
