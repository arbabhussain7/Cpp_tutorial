// 0 is a positive or negative number

#include <iostream>;
using namespace std;
int main(){
    int Number;
    cout<<"Enter any number :"<<endl;
    cin>>Number;
    if(Number<0)
    {
        cout<<"This number is Negative :"<<endl;
    }
    else if(Number>0){
        cout<<"This number is Possitive :"<<endl;
    }
    else if(Number==0){
        cout<<"This number is not Possitive or Negative :"<<endl;
    }
    else{
        cout<<"Invalid number"<<endl;
    }
    return 0;
}