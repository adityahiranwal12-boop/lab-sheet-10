// Module 2: Report Lost Item
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string student, item, category, location, date, description;
    cout << "Student ID: "; getline(cin, student);
    cout << "Item name: "; getline(cin, item);
    cout << "Category: "; getline(cin, category);
    cout << "Last seen location: "; getline(cin, location);
    cout << "Date (YYYY-MM-DD): "; getline(cin, date);
    cout << "Description: "; getline(cin, description);
    ofstream out("records.txt", ios::app);
    if(!out){ cout << "Cannot open records.txt\n"; return 1; }
    out << "LOST|" << student << '|' << item << '|' << category << '|' << location << '|' << date << '|' << description << '\n';
    cout << "Lost item report saved.\n";
}
