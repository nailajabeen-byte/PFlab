#include<iostream>
using namespace std;

main(){

  int count=0;
    int array[100];
cout<<"enter the number of element"<<endl;
int elements;
cin>>elements;
cout<<" total elements:"<<elements<<endl;
        cout<<"enter a number"<<endl;
        int number;
    cin>>number;
for (int i=0;i<100;i++){
    cin>>array[i];
   if(array[i]%2==0){
     count++;
     cout<<"total even number="<<count;
   }
}
}

    