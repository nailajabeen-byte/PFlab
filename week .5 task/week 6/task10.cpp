#include<iostream>
using namespace std;

main(){
    
  char str[100];
  cout<<"enter a  name"<<endl;
  cin>>str;
  int length=0;
  for(int i= str[100];i!=0;i++){
  length++;
  }
  for (int i=length-1;i>=0;i--)
{
    cout<<"reverse string is:"<<str[i]<<endl;
}
}


