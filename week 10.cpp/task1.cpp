#include<iostream>
using namespace std;
void add(int number1 ,int number2);
int main(){



int number1,number2;

cout<<"ENTER A number"<<endl;
cin>>number1;
cout<<"enter a number"<<endl;
cin>>number2;
add(number1,number2);

return 0;
}
void add(int number1,int number2){
    cout<<"sum"<<number1+number2;
}
