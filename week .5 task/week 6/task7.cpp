#include<iostream>
using namespace std;

main(){
    int correctpin=1234;
    int pin[3];
   bool login =false;
 int choice,blance=1000,amount;


    for(int i=0;i<3;i++){
        cout<<"enter atm pin"<<endl;
        cin>>pin[i];
        if(pin[i]==correctpin){
            login=true;
            cout<<"login successful"<<endl;
            break;
        }
        else
        {
            cout<<"incorrect pin"<<endl;
        }
    }
    if (login==true){
        while(true){
 cout<<"------atm menu--------"<<endl;
 cout<<"1.check balance"<<endl;
 cout<<"2.deposit money"<<endl;
 cout<<"3.withdraw money"<<endl;
 cout<<"4.exit"<<endl;
 cout<<"enter choice"<<endl;
 cin>>choice;
 if (choice==1){
   cout<<"current account balance"<<blance<<endl;
 }
 else if (choice==2){
    cout<<"enter amount added"<<endl;
    cin>>amount;
    blance=blance +amount;
   cout<<"update blance:"<<blance<<endl;
    cin>>amount;
 }
 else if (choice==3){
  cout<<"enter amount added"<<endl;
    cin>>amount;
    if(amount<=blance&&amount>0){
    blance=blance -amount;
   cout<<"remaining blance:"<<blance<<endl;
    }

    else{
        cout<<"insufficient blance"<<endl;
    }
 }
 else if (choice==4){
   cout<<"thankyou for using atm"<<endl;
   break;
 }
 else{
    cout<<"invalid reason"<<endl;
 }
}
    }
}
