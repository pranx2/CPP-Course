#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "PRANTO IS A FUTURE SOFTWARE DEVELOPER";
    string read_data;
    /**
     * Opens a file named "tut_53.txt" for writing output.
     *
     * @param out The output file stream object.
     *
     * @returns None
     */
    // ofstream out("tut_53.txt"); //! ofstream is a written function which write txt files;
    // out<<name;


    /**
     * Opens a file named "tut_53.txt" for reading and reads data from it.
     *
     * @param in An input file stream object associated with the file "tut_53.txt".
     * @param read_data A variable to store the data read from the file.
     *
     * @returns None
     */
    ifstream in ("tut_53.txt");
    // ?? in >> read_data;
    /**
     * Reads a line from the input stream and stores it in the variable read_data.
     *
     * @param in The input stream to read from.
     * @param read_data The variable to store the read line.
     *
     * @returns None
     */
    getline ( in, read_data);
    cout<<read_data;
return 0;
}