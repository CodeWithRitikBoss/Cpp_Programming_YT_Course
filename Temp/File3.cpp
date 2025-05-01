#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    cout << "File handling in C++\n" << endl;

    // Reading from a file.
    ifstream in("example.txt"); // Create an input file stream
    if (!in) { // Check if the file opened successfully
        cerr << "Error opening file." << endl; // Print error message
        return 1; // Return with error code
    }
    while (in.eof() == false) { // Read until end of file
        string line;
        getline(in, line); // Read each line from the file
        cout << line << endl; // Print the line to the console
    }
    in.close(); // Close the file stream
    

    return 0;
}