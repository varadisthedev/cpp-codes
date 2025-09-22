#include<map>
#include<iostream>
using namespace std;
int main(){
    map<int,string>m={{1,"hello"},{3,"varad"},{4,"raut"}};
    for (auto& p : m) {
    cout << p.first << " " << p.second << endl;
    break; // just print first
}

    return 0;
}