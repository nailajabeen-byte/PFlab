#include<iostream>
using namespace std;


main(){
     string name[5];
    string names;
     int 
     count=0;
cout<<"enter name of five students"<<endl;
cin>>names;
for(int i =0;i<5;i++){
    cin>>name[i];
    cout<<"enter a letter to check the letter "<<endl;
    char letter;
    cin>>letter;
    for(int i=0;i<5;i++){
        if(name[i]== "letter"){
            count++;
        }
    }
    cout<<"number of names starting with"<<letter<<":"<<count<<endl;
}
}
