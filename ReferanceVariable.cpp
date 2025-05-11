#include"iostream"
using namespace std;
int main(){
    
    int a= 10;
    int &b = a;
    int &tem= a;

    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of a is: "<<b<<endl;
    cout<<"The value of a is: "<<tem<<endl;

    return(0);
}