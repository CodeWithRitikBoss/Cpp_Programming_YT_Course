#include <iostream>
using namespace std;

// Templates in C++:s
// 1. Templates allow writing generic and reusable code.
// 2. They enable functions and classes to operate with any data type.
// 3. Function templates define a blueprint for a function.
// 4. Class templates define a blueprint for a class.
// 5. The compiler generates specific versions of the template for the required data types.
// 6. Syntax: Use the `template <typename T>` or `template <class T>` keyword.
// 7. Templates improve code maintainability and reduce redundancy.

// Template function to find the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}
// Template class to represent a pair of values
template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(T1 f, T2 s) : first(f), second(s) {}

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {

    // Using the template function
    int x = 10, y = 20;
    cout << "Max of " << x << " and " << y << " is: " << findMax(x, y) << endl;

    double a = 5.5, b = 3.3;
    cout << "Max of " << a << " and " << b << " is: " << findMax(a, b) << endl;

    char c1 = 'A', c2 = 'B';
    cout << "Max of " << c1 << " and " << c2 << " is: " << findMax(c1, c2) << endl;

    // Using the template class
    Pair<int, double> p1(1, 2.5);
    p1.display();
    
    

    return 0;
}