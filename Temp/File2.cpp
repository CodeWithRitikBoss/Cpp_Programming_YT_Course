#include<iostream>
using namespace std;
#include<fstream>

int main(){
    cout<<"File handling in C++\n"<<endl;

    // Writing to a file.
    ofstream out; // Create an output file stream
    out.open("example.txt"); // Open the file for writing
    string text = "Hello, World!"; // Text to write to the file
    out << text << endl; // Write to the file
    out.close(); // Close the file stream
    
    // Reading from a file.
    ifstream in; // Create an input file stream
    in.open("example.txt"); // Open the file for reading
    string line;
    while (getline(in, line)) { // Read each line from the file
        cout << line << endl; // Print the line to the console
    }
    in.close(); // Close the file stream
    

    return 0;
}