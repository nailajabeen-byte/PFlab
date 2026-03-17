#include<iostream>
using namespace std;
main()
{
   int choice;
   
 cout<<"------library system--------"<<endl;
 cout<<"1.add book"<<endl;
 cout<<"2.view book"<<endl;
 cout<<"3.barrow book"<<endl;
 cout<<"4.issue book"<<endl;
  cout<<"5.exit"<<endl;
 cout<<" enter choice "<<endl;
 cin>>choice;
 if (choice==1){
   cout<<" enter book name";
   string book;
   cin>>book;
   cout<<"book name hai:"<<book;
 }
 else if (choice==2){
   cout<<" view book     ";
 }
 else if (choice==3){
   cout<<" barrow book";
 }
 else if (choice==4){
   cout<<"issue book";
 }
 else if (choice==5){
   cout<<"goog bye";
 }
}

