#include<bits/stdc++.h>
using namespace std;

void display(vector <int> v){
    cout<<endl<<"printing vector: ";
    for( auto c:v){
        cout<<c<<" ";;
    }
}

int main(){
    vector <int> v={1,4,23,3,5,5,5,6,6,32};
    cout<<v.front()<<" "<<v.back();

    cout<<" "<<v[3]<<endl;

    cout<<v.at(2);
    //at keyword throws an error at out of bound error. []doesnt do that

    v.push_back(23);
    v.pop_back();


    // to iterate the entire arr" either use a for loop or...
    display(v);

    sort(v.begin(),v.end());
    display(v);

    sort(v.rbegin(),v.rend());
    display(v);

    v.clear();
    display(v);

    v.resize(9,0);
    display(v);

    cout<<endl<<v.size();

    //using iterator
    v.push_back(5);
    auto it= find(v.begin(), v.end(),5); 
      if (it != v.end()) {
        cout << "Found at index: " << it - v.begin() << "\n";
    } else {
        cout << "Not found\n";
    }

    fill(v.begin(), v.end(),5);
    int cou= count(v.begin(),v.end(),5); 
    cout<<endl<<"count is: "<<cou;
    //todo: pairs in vectors

    /*upgrade current file with insert(), erase(), assign()
     Solve 2 problems using vectors on GFG or LeetCode
    Problem 1: Remove all duplicates from vector
    Problem 2: Count freq of elements in vector
// Day 1: Did vector basics, cleared STL functions, feel 7/10 confident*/

    
    return 0;
}