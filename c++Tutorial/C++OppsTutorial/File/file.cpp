#include <iostream>
#include <fstream> // help to deal with files
using namespace std;

/* These are some useful classes for working with files in C++
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase
*/

/* In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
    1. Using the constructor
    2. Using the member function open() of the class
*/

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt"); // MyFile is object of ofstream class

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();

  // reading files
    // myText is a variable, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        cout << myText;
    }

    // Close the file
    MyReadFile.close();

    return 0;
}