#include<iostream>
using namespace std;

main(){
    int passward=1234,pin[3],choice,age[3],course[3];
  string username = "admin",student;
  cout<<"enter pin"<<endl;
  
  for(int i=0;i=3;i++){
  cin >>pin[i];
  }
  if( passward=='pin'&& username=="admin"){
    cout<<"login successful"<<endl;
  }
  cout<<"1.add student"<<endl;
  cout<<"2.view student"<<endl;
  cout<<"3.add course"<<endl;
  cout<<"4.view couse"<<endl;
  cout<<"5.exit"<<endl;
  cout<<"6.enter choice"<<endl;
  cin >>choice;
  if (choice==1){
    cout<<"enter student name"<<endl;
    cin>> student;
    cout<<"enter age"<<endl;
    
    for(int j=0;j=3;j++){
 cin>>age[j];
    }  
}
if (choice==2){
    
if (choice==3){
    cout<<"course name"<<endl;
    for(int k=0;k=3;k++){
 cin>>course[k];
    }
}
}
