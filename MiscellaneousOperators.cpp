#include<iostream>
using namespace std;

int main(){

    // Miscellaneous operators in C++.
    // sizeof(), &, *, ?:

    int a= 10;
    cout<<"The size of a is : "<<sizeof(bool)<<endl;

    cout<<"The address of a is : "<<&a<<endl;

    int *p= &a;
    cout<<"The address a is : "<<p<<endl;

    cout<<"The value of a is : "<<*p<<endl;

    return 0;
}