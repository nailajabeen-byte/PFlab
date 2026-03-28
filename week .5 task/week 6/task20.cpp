#include<iostream>
using namespace std;


 int main(){
    int number[2];
    cout<<"enter a number"<<endl;
    cin>>number[2];
    bool found=false;
    for(int i=0;i<=2;i++){
        cin>>number[i];
        for(int j=0;j<i;j++){
        if(number[i]==number[j]){
            bool found=true;
            break;
        }
    }
            cout<<"already found"<<endl;
    }
}
            


