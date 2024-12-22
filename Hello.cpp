#include<iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

string decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n = n / 2;
    }
    return binary;
}

int main(int argc, char const *argv[])
{
    cout << "Hello World." << endl;
    int num1 = 15;
    int num2 = 10;
    cout << "Sum: " << add(num1, num2) << endl;

    int decimalNumber = 2;
    cout << "Binary of " << decimalNumber << " is: " << decimalToBinary(decimalNumber) << endl;

    return 0;
}
