#include<iostream>
using namespace std;


main(){
    string name[5];
    string names;
cout<<"enter name of five students"<<endl;
cin>>names;
for(int i =0;i<5;i++){
    cin>>name[5];
    for(int i=0;i<5;i++){
    
    for(int j=i+1;j<5;j++){
    
    if (name[i]>name[j]){
    string temp=name[i];
    name[i]=name[j];
    name[j]=temp;
    }
}
    }
    cout<<"\nnames in alphabetical order:"<<endl;
    for(int i=0;i<5;i++)
    cout<<name[i]<<endl;
}
}


