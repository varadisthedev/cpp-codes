#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;
    l.push_back(12);
    l.push_front(11);
    l.push_back(21);
    l.push_back(12);
    l.push_front(2);
    l.sort();
    for(int x:l) cout<<x<<" ";


}