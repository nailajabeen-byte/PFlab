#include<iostream>
using namespace std;

main(){
    int array[100];
    int n;
cout<<"enter number of elements"<<endl;
cin>>n;
cout<<n<<endl;
cout<<"enter number"<<endl;
int number;
cin>>number;
for(int i =0;i<n;i++){
    cin>>array[i];
}
int max=array[0];

for (int i=1;i<n;i++ ){
    if(array[i]>max){
        max=array[i];
    }
    
    
    cout<<"max number"<<max<<endl;


}
}
