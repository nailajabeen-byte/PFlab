#include<iostream>
using namespace std;
main () {
   int age,price,toyprice;
   cout<<"enter age"<<endl;
   cin>>age;
   cout<<"enter price"<<endl;
   cin>>price;
   cout<<"enter toy price"<<endl;
   cin>>toyprice;
   int money=0,gift=10,toys=0;
   for(int i=1;i<=age;age++)
   { 
    if(i%2==0)
    {
        money=money+gift-1;
        gift=gift+10;
    }
    else
    {
        toys++;
    }
  money = money + toys * toyprice;

    if(money >= price)
        cout << "Yes " << money - price;
    else
        cout << "No " << price - money;

    return 0;
}
}