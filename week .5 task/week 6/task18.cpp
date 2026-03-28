#include<iostream>
using namespace std;


 int main(){
    string name[100];

    cout<<"enter number of student "<<endl;
    int digits;
    cin>>digits;
    cout<<"enter the name of students"<<endl;
    string names;
    cin>>names;
    for(int i=0;i<digits;i++){
    cin>>name[i];
    }
    for(int i=0;i<digits;i++){
        for(int j=i+1;j<4;j++){
            if(name[i]>name[j]){
                string temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    cout<<"\nname in alphabatical order"<<endl;
    for(int i=0;i<digits;i++)
    cout<<name[i]<<endl;
return 0;
}


