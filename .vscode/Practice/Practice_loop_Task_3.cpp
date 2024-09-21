// Write a program in C++ to check whether a number is prime or not.

#include <iostream>
using namespace std;
int main(){
    system("cls");
    int num;
    int crt =0;
    cout<<"Enter a number is prime or not :";
    cin>>num;
    for (int i = 1; i <num; i++)
    {
       if (num%i==0)
       {
    crt++;
       }
       
    }
    if(crt==2){
        cout<<"prime no";
    }
    else{
cout<<"Not prime" ; 
    }






    
    return 0;
    
}