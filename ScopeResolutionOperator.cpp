#include<iostream>
using namespace std;

int a= 10;

int main(){

    // Scope Resolution operator in C++.

    cout<<"The value of a is: "<<a<<endl;

    {
        int a= 20;
        cout<<"The value of a is: "<<a<<endl;

        cout<<"The value of Global a is: "<<::a<<endl;
    }

    return 0;
}