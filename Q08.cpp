// Module 8: Item Statistics
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ifstream in("records.txt"); string type, rest; int lost=0, found=0, total=0;
    while(getline(in,type,'|') && getline(in,rest)){ ++total; if(type=="LOST") ++lost; else if(type=="FOUND") ++found; }
    cout << "Total records: " << total << "\nLost reports: " << lost << "\nFound reports: " << found << '\n';
}
