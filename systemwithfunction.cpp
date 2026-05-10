#include <iostream>
using namespace std;

// 🔹 FUNCTIONS

void deposit(int balances[], int userIndex){
    int deposit_amount;
    cout<<"enter deposit amount"<<endl;
    cin>>deposit_amount;

    balances[userIndex]+=deposit_amount;

    cout<<"your amount has been deposit"<<endl;
    cout<<"updated balance is "<<balances[userIndex]<<endl;
}

void withdraw(int balances[], int userIndex){
    int withdraw_amount;
    cout<<"enter withdraw amount"<<endl;
    cin>>withdraw_amount;

    if(withdraw_amount<=balances[userIndex]){
        balances[userIndex]-=withdraw_amount;
        cout<<"amount withdrawn"<<endl;
        cout<<"updated balance "<<balances[userIndex]<<endl;
    }
    else{
        cout<<"insufficient balance"<<endl;
    }
}

void checkBalance(int balances[], int userIndex){
    cout<<"your balance is "<<balances[userIndex]<<endl;
}

void viewDetails(string names[], int account_numbers[], int passwords[], int balances[], int userIndex){
    cout<<"name: "<<names[userIndex]<<endl;
    cout<<"account number: "<<account_numbers[userIndex]<<endl;
    cout<<"password: "<<passwords[userIndex]<<endl;
    cout<<"balance: "<<balances[userIndex]<<endl;
}

void transfer(int balances[], int account_numbers[], int totalUsers, int userIndex){
    int recipient_account,transfer_amount;

    cout<<"enter recipient account number"<<endl;
    cin>>recipient_account;

    cout<<"enter transfer amount"<<endl;
    cin>>transfer_amount;

    int receiver=-1;

    for(int i=0;i<totalUsers;i++){
        if(account_numbers[i]==recipient_account){
            receiver=i;
            break;
        }
    }

    if(receiver!=-1 && transfer_amount<=balances[userIndex]){
        balances[userIndex]-=transfer_amount;
        balances[receiver]+=transfer_amount;
        cout<<"transfer successful"<<endl;
    }
    else{
        cout<<"transfer failed"<<endl;
    }
}

void changeName(string names[], int userIndex){
    string new_name,confirm_name;

    cout<<"enter new name"<<endl;
    cin>>new_name;

    cout<<"confirm new name"<<endl;
    cin>>confirm_name;

    if(new_name==confirm_name){
        names[userIndex]=new_name;
        cout<<"name changed successfully"<<endl;
    }
    else{
        cout<<"name mismatch"<<endl;
    }
}

void loan(int balances[], int userIndex){
    int loan_amount;

    cout<<"enter loan amount"<<endl;
    cin>>loan_amount;

    if(loan_amount<=50000){
        balances[userIndex]+=loan_amount;
        cout<<"loan granted"<<endl;
    }
    else{
        cout<<"loan limit exceeded"<<endl;
    }
}

void minimumBalance(int balances[], int userIndex){
    if(balances[userIndex]<500){
        cout<<"warning: low balance"<<endl;
    }
    else{
        cout<<"balance is safe"<<endl;
    }

    cout<<"current balance "<<balances[userIndex]<<endl;
}

int main(){

int choice,password,account_number;
string name;
int recipient_account,transfer_amount;
string new_name,confirm_name;
int loan_amount;

// 🔹 DATA
string names[10]={"Ali","Ahmed","Sara","Ayesha","Usman","Hassan","Fatima","Zain","Bilal","Noor"};
int account_numbers[10]={101,102,103,104,105,106,107,108,109,110};
int passwords[10]={1111,2222,3333,4444,5555,6666,7777,8888,9999,1010};
int balances[10]={5000,6000,7000,8000,9000,10000,11000,12000,13000,14000};

int totalUsers=10;

while(true){

cout<<"\n------------------------------------------"<<endl;
cout<<"-------- BANK MANAGEMENT SYSTEM ----------"<<endl;
cout<<"------------------------------------------"<<endl;

cout<<"1. deposit money"<<endl;
cout<<"2. withdraw money"<<endl;
cout<<"3. check balance"<<endl;
cout<<"4. view account details"<<endl;
cout<<"5. transfer money"<<endl;
cout<<"6. change account name"<<endl;
cout<<"7. take loan"<<endl;
cout<<"8. minimum balance warning"<<endl;
cout<<"9. exit"<<endl;

cout<<"enter your choice: ";
cin>>choice;

if(choice==9){
    cout<<"YOU ARE EXIT"<<endl;
    cout<<"thank you for your visit"<<endl;
    break;
}

else if(choice==1){

    cout<<" the deposit money"<<endl;

    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"enter your account number"<<endl;
    cin>>account_number;

    cout<<"enter your password"<<endl;
    cin>>password;

    int userIndex=-1;

    for(int i=0;i<totalUsers;i++){
        if(name==names[i] && account_number==account_numbers[i] && password==passwords[i]){
            userIndex=i;
            break;
        }
    }

    if(userIndex!=-1){
        cout<<"login successfully"<<endl;
        deposit(balances, userIndex);
    }
    else{
        cout<<"wrong login details"<<endl;
    }
}

else if(choice==2){

    cout<<"withdraw money"<<endl;

    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"enter your account number"<<endl;
    cin>>account_number;

    cout<<"enter your password"<<endl;
    cin>>password;

    int userIndex=-1;

    for(int i=0;i<totalUsers;i++){
        if(name==names[i] && account_number==account_numbers[i] && password==passwords[i]){
            userIndex=i;
            break;
        }
    }

    if(userIndex!=-1){
        cout<<"login successfully"<<endl;
        withdraw(balances, userIndex);
    }
    else{
        cout<<"wrong login details"<<endl;
    }
}

else if(choice==3){

    cout<<"check balance"<<endl;

    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"enter your account number"<<endl;
    cin>>account_number;

    cout<<"enter your password"<<endl;
    cin>>password;

    int userIndex=-1;

    for(int i=0;i<totalUsers;i++){
        if(name==names[i] && account_number==account_numbers[i] && password==passwords[i]){
            userIndex=i;
            break;
        }
    }

    if(userIndex!=-1){
        checkBalance(balances, userIndex);
    }
    else{
        cout<<"wrong login details"<<endl;
    }
}

else if(choice==4){

    cout<<"view account details"<<endl;

    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"enter your account number"<<endl;
    cin>>account_number;

    cout<<"enter your password"<<endl;
    cin>>password;

    int userIndex=-1;

    for(int i=0;i<totalUsers;i++){
        if(name==names[i] && account_number==account_numbers[i] && password==passwords[i]){
            userIndex=i;
            break;
        }
    }

    if(userIndex!=-1){
        viewDetails(names, account_numbers, passwords, balances, userIndex);
    }
    else{
        cout<<"wrong login details"<<endl;
    }
}

else if(choice==5){

    cout<<"transfer money"<<endl;

    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"enter your account number"<<endl;
    cin>>account_number;

    cout<<"enter your password"<<endl;
    cin>>password;

    int userIndex=-1;

    for(int i=0;i<totalUsers;i++){
        if(name==names[i] && account_number==account_numbers[i] && password==passwords[i]){
            userIndex=i;
            break;
        }
    }

    if(userIndex!=-1){
        transfer(balances, account_numbers, totalUsers, userIndex);
    }
    else{
        cout<<"wrong login details"<<endl;
    }
}

else if(choice==6){

    cout<<"change account name"<<endl;

    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"enter your account number"<<endl;
    cin>>account_number;

    cout<<"enter your password"<<endl;
    cin>>password;

    int userIndex=-1;

    for(int i=0;i<totalUsers;i++){
        if(name==names[i] && account_number==account_numbers[i] && password==passwords[i]){
            userIndex=i;
            break;
        }
    }

    if(userIndex!=-1){
        changeName(names, userIndex);
    }
    else{
        cout<<"wrong login details"<<endl;
    }
}

else if(choice==7){

    cout<<"take loan"<<endl;

    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"enter your account number"<<endl;
    cin>>account_number;

    cout<<"enter your password"<<endl;
    cin>>password;

    int userIndex=-1;

    for(int i=0;i<totalUsers;i++){
        if(name==names[i] && account_number==account_numbers[i] && password==passwords[i]){
            userIndex=i;
            break;
        }
    }

    if(userIndex!=-1){
        loan(balances, userIndex);
    }
    else{
        cout<<"wrong login details"<<endl;
    }
}

else if(choice==8){

    cout<<"minimum balance check"<<endl;

    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"enter your account number"<<endl;
    cin>>account_number;

    cout<<"enter your password"<<endl;
    cin>>password;

    int userIndex=-1;

    for(int i=0;i<totalUsers;i++){
        if(name==names[i] && account_number==account_numbers[i] && password==passwords[i]){
            userIndex=i;
            break;
        }
    }

    if(userIndex!=-1){
        minimumBalance(balances, userIndex);
    }
    else{
        cout<<"wrong login details"<<endl;
    }
}

else{
    cout<<"invalid choice"<<endl;
}

}

return 0;
}