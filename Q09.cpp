// Module 9: Export a Report to report.txt
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream in("records.txt"); ofstream out("report.txt"); string line; int count=0;
    if(!out){ cout << "Cannot create report.txt\n"; return 1; }
    out << "COLLEGE LOST AND FOUND REPORT\nTYPE | STUDENT | ITEM | CATEGORY | LOCATION | DATE | DESCRIPTION\n";
    while(getline(in,line)){ out << line << '\n'; ++count; }
    cout << count << " records exported to report.txt.\n";
}
