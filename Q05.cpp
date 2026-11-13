// Module 5: Automatically Match Lost and Found Items
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
struct Record { string type, student, item, category, location, date, description; };
int main(){
    ifstream in("records.txt"); vector<Record> rows; string line;
    while(getline(in,line)){ stringstream s(line); Record r;
        if(getline(s,r.type,'|')&&getline(s,r.student,'|')&&getline(s,r.item,'|')&&getline(s,r.category,'|')&&getline(s,r.location,'|')&&getline(s,r.date,'|')&&getline(s,r.description)) rows.push_back(r);
    }
    bool matched=false;
    for(const auto& lost:rows) if(lost.type=="LOST")
        for(const auto& found:rows) if(found.type=="FOUND" && (lost.item==found.item || lost.category==found.category)){
            cout << "Possible match: LOST '" << lost.item << "' at " << lost.location << " / FOUND '" << found.item << "' at " << found.location << '\n'; matched=true;
        }
    if(!matched) cout << "No possible matches found.\n";
}
