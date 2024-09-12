#include<iostream>
using namespace std;
int main(){
    system("cls");
int Hamza , Ali ;
cout<<"Enter the age of hamza ";
cin>>Hamza;
cout<<"Enter the age of Ali ";
cin>>Ali;
if (Hamza == Ali)
{

cout<<"Hamza and Ali are Twins ";
}

 else if (Hamza>=Ali)
{
    cout<<"Hamza is big Brother his age is "<<Hamza<<" Ali is smaller brother his age is "<<Ali;
    /* code */
}
else{
    cout<<"Ali is big Brother his age is "<<Ali<<" Hamza is smaller brother his age is "<<Hamza;
}

}