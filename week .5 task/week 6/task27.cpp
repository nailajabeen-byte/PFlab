#include<iostream>
using namespace std;


 int main(){ 

string str;
string sen;
string result=" ";
cout<<"enter a sen"<<endl;
cin>>sen;
for (int i=0;i<str.length();i++){
char ch=str[i];

if (ch!='a'&& ch!='e'&& ch!='i'&& ch!='o'&& ch!='u'){
result+=ch;
}
}
cout<<"the string without vowel is"<<result<<endl;
 return 0;
}
