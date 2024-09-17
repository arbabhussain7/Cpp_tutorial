//Program to calculate the bill in c++.

#include <iostream>
using namespace std;
int main()
{
    int myBill;
    int myUnit; 
    myUnit = 20;
    myBill = myBill*myUnit;
    cout<<"Enter your Current Units :"<<endl;
    cin>>myBill;
    if(myBill<=100){
        cout<<"Your bill is :"<<myBill<<endl;
    }
    else if(myBill>100){
        cout<<"Your bill is :"<<myBill<<endl;
    }
    else(myBill<10);{
        cout<<"Your bill is currently is not available"<<endl;
    }
    return 0;
}