// Module 6: View All Lost and Found Records
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream in("records.txt"); string line;
    if(!in){ cout << "No records file yet.\n"; return 0; }
    cout << "TYPE | STUDENT | ITEM | CATEGORY | LOCATION | DATE | DESCRIPTION\n";
    while(getline(in,line)) cout << line << '\n';
}
