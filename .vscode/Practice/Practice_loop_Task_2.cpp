//Write a program in C++ to find the sum of the first 10 natural numbers.

#include <iostream>
using namespace std;
int main()
{system("CLS");
    int num,sum=0;
    cout<<"Enter how many numbes "<<" ";
    cin>>num;
    for(int i=1;i<=num;i++){
        sum=sum+i;
        
    }
        cout<<"sum is "<<sum;
    return 0;
}