#include<iostream>
using namespace std;

int main(){

    int a= 3, b= 2;
    // Assignment operators in C++.
    // =, +=, -=, *=, /=, %=

    cout<<"The value of a is : "<<a<<endl;

    cout<<"The value of b is : "<<b<<endl;

    a= 10;
    cout<<"The value of a is : "<<a<<endl;

    a+= 5; // 10+5=15
    cout<<"The value of a is : "<<a<<endl;

    a-= b;  // 15-2=13
    cout<<"The value of a is : "<<a<<endl;

    a*= b;  // 13*2=26
    cout<<"The value of a is : "<<a<<endl;

    a/= b;  // 26/2=13
    cout<<"The value of a is : "<<a<<endl;

    a%= b;  // 13%2=1
    cout<<"The value of a is : "<<a<<endl;

    a= 100;
    cout<<"Now the value of a is : "<<a<<endl;

    return 0;
}