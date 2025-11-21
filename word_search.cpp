#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm> 
using namespace std;
    string toLower(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}
    void gaby(string filename, string input) {
    
    
    input = toLower(input);

    ifstream file(filename);
    string line;
    int lineno = 0;

    while (getline(file, line)) {
        lineno++;

        line = toLower(line);

        stringstream ss(line);
        string word;

        while (ss >> word) {       
            if (word == input) {   
                cout << "Found in line: " << lineno << endl;
            }
        }
    }
}
int main(){
    string filename , input;
   

    cout << "Enter file name: ";
    cin >> filename;


    cout << "Enter word to search: ";
    cin >> input;

    gaby(filename, input);

    return 0;
}

