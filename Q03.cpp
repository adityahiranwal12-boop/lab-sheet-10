// Module 3: Report Found Item
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string student, item, category, location, date, description;
    cout << "Finder's student ID: "; getline(cin, student);
    cout << "Item name: "; getline(cin, item);
    cout << "Category: "; getline(cin, category);
    cout << "Found at location: "; getline(cin, location);
    cout << "Date (YYYY-MM-DD): "; getline(cin, date);
    cout << "Description: "; getline(cin, description);
    ofstream out("records.txt", ios::app);
    if(!out){ cout << "Cannot open records.txt\n"; return 1; }
    out << "FOUND|" << student << '|' << item << '|' << category << '|' << location << '|' << date << '|' << description << '\n';
    cout << "Found item report saved.\n";
}
