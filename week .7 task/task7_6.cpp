#include<iostream>
using namespace std;
main()
{
    int number,digit;
    cout<<"enter the number"<<endl;
    cin>>number;
    cout<<"enter the digits"<<endl;
    cin>>digit;
    int frequency=0;
    for (int i = number; i >0; i/=10)
    {
        int lastdigit=i%10;
        if(lastdigit==digit)
        {
            frequency++;
        }
    }

        
        cout<<"frequency of the digits:"<<frequency;
    
    return 0;
}