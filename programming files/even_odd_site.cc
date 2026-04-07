#include <iostream>
#include <fstream>
using namespace std;

// Code that does stuff
// Bug added to screw up the formatting desired

int main() {
    ofstream file;
    file.open("numbers.html");
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><li>" << i << "</li><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><img>" << i << "</img></tr>\n";
        }
    }
    file << "</table>\n</body>\n</html>";
    file.close();
    ifstream input("numbers.html");
    cout << input.rdbuf();
    input.close();
    return 0;
}
