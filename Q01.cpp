// Module 1: Student Login
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string studentId, name;
    cout << "Student ID: "; getline(cin, studentId);
    cout << "Student name: "; getline(cin, name);
    if(studentId.empty() || name.empty()){ cout << "ID and name are required.\n"; return 1; }
    ofstream out("students.txt", ios::app);
    if(!out){ cout << "Cannot open students.txt\n"; return 1; }
    out << studentId << '|' << name << '\n';
    cout << "Login recorded for " << name << " (" << studentId << ").\n";
}
