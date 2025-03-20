#include<iostream>
using namespace std;

int main(){

    // Logical operators in C++.
    // &&, ||, !
    // 1 means true and 0 means false.

    int a, b;
    a= 1, b= 1;

    cout<<"is a && b : "<<(a&&b)<<endl; //1

    cout<<"is a || b : "<<(a||b)<<endl; //1

    cout<<"is !a : "<<(!a)<<endl; //0

    return 0;
}