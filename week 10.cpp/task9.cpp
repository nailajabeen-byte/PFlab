#include<iostream>
using namespace std;

int symmetrical(int num);
int main(){
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
   for(int i=0;i<=3;i++){
    cin>>number;
    for(int j=3;j<=1;j--){
        cin>>number;
        if (i==j){
            cout<<"symmetrical"<<number;
        }
            else { 
                cout<<"not symmetrical"<<number;


            }
        }
    }
    int symmetrical(num)
   }
