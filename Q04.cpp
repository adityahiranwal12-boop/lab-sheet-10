// Module 4: Search Item Records
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    string query; cout << "Search item/category/location: "; getline(cin, query);
    ifstream in("records.txt"); string line; bool found=false;
    while(getline(in,line)) if(line.find(query)!=string::npos){ cout << line << '\n'; found=true; }
    if(!found) cout << "No matching records found.\n";
}
