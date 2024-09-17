// Program in C++ to check whether a number is even or odd with the flowchart

#include <iostream>
using namespace std;
int main(){
    int Number;
    cout<<"Enter any number to check even or odd number :"<<endl;
    cin>>Number;

    switch(Number % 2)
    {
        case 0: cout<<"The number is Even."<<endl;
        break;
        case 1: cout<<"The number is odd."<<endl;
        break;
    }
    return 0;

}