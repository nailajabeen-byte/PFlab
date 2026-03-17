#include<iostream>
using namespace std;
main()
{
   int choice,n1,n2,sum,sub,mul,div;
  
 cout<<"----simple calculator--------"<<endl;
 cout<<"1.addition"<<endl;
 cout<<"2.subtraction"<<endl;
 cout<<"3.multiplication"<<endl;
 cout<<"4.division"<<endl;
cout<<"5.clear screen"<<endl;
 cout<<"6.exit"<<endl;
 cout<<"enter choice"<<endl;
 cin>>choice;
 cout<<"enter first no"<<endl;
 cin>>n1;
cout<<"enter sec no"<<endl;
 cin>>n2;

 if (choice==1){
    sum=n1+n2;
 
    cout<<"sum:"<<sum;
}
  else if (choice==2){
    sub=n1-n1;
    
   cout<<"sub:<<sub";
 }
 else if (choice==3){
    mul=n1*n2;
   cout<<"mul:"<<mul;
 }
 else if (choice==4){
    div=n1/n2;
   cout<<"div :"<<div;
 }
else if (choice==5){
   cout<<" ";
 }
 else if (choice==6){
   cout<<"you selected : existing ";
 }
}




