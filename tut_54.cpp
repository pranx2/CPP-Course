#include<bits/stdc++.h>
using namespace std;
int main(){
    /**
     * Output file stream for writing data to a file.
     *
     * This stream is used to write data to a file. It is typically used in conjunction with
     * the insertion operator (<<) to write data to the file.
     *
     * Example usage:
     * \code{.cpp}
     * out.open("output.txt");
     * out << "Hello, World!";
     * out.close();
     * \endcode
     */
    ofstream out; 
    out.open("54_sample_text.txt");
    out<<"Hello World "<<endl;
    out<<"Hi!"<<endl;
    out<<"I am Pritom, I am a newbie in this programming world :)"<<endl;
    out.close();


    //!

    /**
     * Input file stream object used for reading data from files.
     */
    /**
     * Reads and outputs the content of a text file.
     *
     * @param in The input file stream.
     * @param text The string to store the content of the file.
     *
     * @returns None
     */
    ifstream in;
    string text;
    in.open("54_sample_text.txt");
    while(in.eof() == 0 ){
    /**
     * Reads a line from the input stream and stores it in the 'text' variable.
     *
     * @param in The input stream to read from.
     * @param text The variable to store the read line.
     *
     * @returns None
     */
    getline(in, text);
    cout<<text<<endl;
    }
return 0;
}