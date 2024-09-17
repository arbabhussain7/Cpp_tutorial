// Program to calculate the bill in c++


#include <iostream>
using namespace std;
int main()
{system("cls");
    int rate1, rate2, units, bill;
    rate1 = 10;
    rate2 = 15;
    cout<<"Enter units consumed by clint"<<endl;
    cin>>units;
    if(units<250){
        bill=units*rate1;
        cout<<"Your total bill is :"<<bill;
    }
    else
    {
        bill=units*rate2;
        cout<<"Your total bill is : "<<bill;
    }
    return 0;
}