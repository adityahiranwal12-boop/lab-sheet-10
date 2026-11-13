// Module 7: Delete a Record by its row number
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main(){
    ifstream in("records.txt"); vector<string> rows; string line;
    while(getline(in,line)) rows.push_back(line);
    if(rows.empty()){ cout << "No records to delete.\n"; return 0; }
    for(size_t i=0;i<rows.size();++i) cout << i+1 << ") " << rows[i] << '\n';
    size_t n; cout << "Row number to delete (0 cancels): "; cin >> n;
    if(n==0) return 0;
    if(n>rows.size()){ cout << "Invalid row number.\n"; return 1; }
    rows.erase(rows.begin()+n-1);
    ofstream out("records.txt"); for(const auto& row:rows) out << row << '\n';
    cout << "Record deleted.\n";
}
