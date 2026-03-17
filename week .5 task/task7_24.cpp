#include<iostream>
using namespace std;
main()
{
   int pin=1234,p,choice;
    for(int i=1;i<=3;i++)
    {
   cout<<"enter atm pin";
   cin>>p;
   
   if (p==pin)
   {
   cout<<"login successful"<<endl;
   break;
}
if (i==3)
   {
   cout<<"to may attempts.Card blocked"<<endl;
}
}
 cout<<"------atm menu--------"<<endl;
 cout<<"1.check balance"<<endl;
 cout<<"2.deposit money"<<endl;
 cout<<"3.withdraw money"<<endl;
 cout<<"4.exit"<<endl;
 cout<<"enter choice"<<endl;
 cin>>choice;
 if (choice==1){
   cout<<"current account balance";
 }
 else if (choice==2){
   cout<<"enter amount added";
 }
 else if (choice==3){
   cout<<"enter amount deducted";
 }
 else if (choice==4){
   cout<<"program termintae";
 }
}

