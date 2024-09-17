// Write a Program to Swap Two Numbers without using condition .....

#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    num1 = 5;
    num2 = 10;
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    cout<<num1<<endl;
    cout<<num2<<endl;
    return 0;
}