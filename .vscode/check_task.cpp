#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter you Marks ";
    cin>>marks;
    if(marks <=100 && marks >=85){
        cout<<"A";

    }
    else if (marks <85 && marks>= 75){
        cout<<" B";
    }
    else if (marks < 75 && marks>=65)

    {
    cout<<"C";
    }
    else if (marks <65 && marks >=50){
        cout<<"D";
    }
    else if(marks <50 && marks>=0){
        cout<<"F";
    }
    else
    {
        cout<<" Enter correct marks ";
    }

    
}