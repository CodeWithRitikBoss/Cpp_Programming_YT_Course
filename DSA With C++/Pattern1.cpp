#include"iostream"
using namespace std;

// Pattern 1
// 1. Print the following pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// 2. Print the following pattern
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// Function for printing the pattern1.
void pattern1(int n){
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Function for printing the pattern2.
void pattern2(int n){
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    
    // Pattern 1
    pattern1(5);
    cout<<endl;
    pattern2(5);
    cout<<endl;

    return 0;
}