#include<iostream>
#include<fstream>
using namespace std;
int main(){
    cout<<"File handling in C++\n"<<endl;

    // Writing to a file.
    ofstream out("example.txt"); // Create an output file stream
    out << "Hello, World!" << endl; // Write to the file
    out << "This is a test file." << endl; // Write more to the file
    out.close(); // Close the file stream
    

    // Reading from a file.
    ifstream in("example.txt"); // Create an input file stream
    string line;
    while (getline(in, line)) { // Read each line from the file
        cout << line << endl; // Print the line to the console
    }
    in.close(); // Close the file stream


    return 0;
}